#include <bits/stdc++.h>

using namespace std;

int main () {

int N, a[100100], S=0;
cin>>N;

    for(int i=0; i<N; i++){

        cin>>a[i];
        S+=a[i];

        if(a[i]==0){
            i--;
            S-=a[i];
            i--;
            N-=2;
        }
    }

        cout<<S;
}
