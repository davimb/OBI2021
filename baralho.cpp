#include <bits/stdc++.h>

using namespace std;

int CO[200], ES[200], OU[200], PA[200], A;
int main () {

string N, M;

cin>>N;

    for(int i=0; i<(int)N.size(); i++){

        if(N[i]!='C' and N[i]!='E' and N[i]!='U' and N[i]!='P'){
            M+=N[i];
        }
        if(N[i]=='C'){
            A=stoi(M);
            CO[A]++;
            M.clear();
        }
        if(N[i]=='E'){
            A=stoi(M);
            ES[A]++;
            M.clear();
        }
        if(N[i]=='U'){
            A=stoi(M);
            OU[A]++;
            M.clear();
        }
        if(N[i]=='P'){
            A=stoi(M);
            PA[A]++;
            M.clear();
        }
    }
    int contco=13, contes=13, contou=13, contpa=13;
    for(int i=1; i<=13; i++){

            if(CO[i]==1)
                contco--;
            else if(CO[i]==2)
                contco=-1;

            if(ES[i]==1)
                contes--;
            else if(ES[i]==2)
                contes=-1;

            if(OU[i]==1)
                contou--;
            else if(OU[i]==2)
                contou=-1;

            if(PA[i]==1)
                contpa--;
            else if(PA[i]==2)
                contpa=-1;

    }
    if(contco<=-1)
        cout<<"erro"<<endl;
    else cout<<contco<<endl;

    if(contes<=-1)
        cout<<"erro"<<endl;
    else cout<<contes<<endl;

    if(contou<=-1)
        cout<<"erro"<<endl;
    else cout<<contou<<endl;

    if(contpa<=-1)
        cout<<"erro"<<endl;
    else cout<<contpa<<endl;


}
