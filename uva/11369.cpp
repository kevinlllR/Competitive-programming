#include <bits/stdc++.h>
bool cmp(int a,int b){
return a>b;
}
using namespace std;

int main(){
int t,k;
cin>>t;
while(t--){
cin>>k;
vector<int> n(k);
for(int i=0;i<k;i++){cin>>n[i];}
sort(n.begin(),n.end(),cmp);

int cont=1;
int cont2=0;
for(int i=0;i<k;i++){
if(cont%3==0){
cont2=cont2+n[i];}
cont++;
}

cout<<cont2<<endl;
}
return 0;
}
