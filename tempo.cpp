#include <bits/stdc++.h>

using namespace std;

string S;
int tempo[200];

int main (){

vector< pair <int, int> > resp;

int N, A[200],amigo;
char a;

cin>>N;

    for(int i=0; i<N; i++){
        cin>>a>>amigo;

        A[i]=amigo;

        S+=a;

    }

    int aux=0;

    for(int i=0; i<N; i++){

        if(S[i]=='R'){
            aux=1;

            if(i==(N-1))
                resp.push_back(make_pair(A[i], -1));


            for(int j=i+1; j<N; j++){

                if(j==(N-1) and A[j]!=A[i]){
                    resp.push_back(make_pair(A[i],  -1));
                }

                if(S[j]=='R' and aux==0)
                    aux=1;

                else if(S[j]=='R' and aux==1)
                    tempo[A[i]]+=1;

                if(S[j]=='E' and aux==0)
                    aux=1;

                else if(S[j]=='E' and aux==1)
                    tempo[A[i]]+=1;

                if(S[j]=='E' and A[j]==A[i]){
                    resp.push_back(make_pair(A[i], tempo[A[i]]));
                    break;
                }

                if(S[j]=='T'){
                    tempo[A[i]]+=A[j];
                    aux=0;
                }
            }
        }
    }

    sort(resp.begin(), resp.end());

    int agoravai=0;

    for(int i=0; i<resp.size(); i++){

        if(resp[i].second==-1){
            cout << resp[i].first << " "<< resp[i].second << endl;
            agoravai=resp[i].first;
        }

        if(resp[i].first==resp[i+1].first) continue;

        if(agoravai!=resp[i].first)
            cout << resp[i].first << " "<< resp[i].second << endl;

    }
}
