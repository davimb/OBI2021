#include <bits/stdc++.h>
using namespace std;

int main () {

int cont=0;
char a;

for(int i=1; i<=6; i++){
    cin>>a;
    if(a=='V') cont++;
}

if(cont==0)cout<<"-1";
else if(cont==1 or cont==2) cout<<"3";
else if(cont==3 or cont==4) cout<<"2";
else if(cont==5 or cont==6) cout<<"1";
}
