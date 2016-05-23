#include <bits/stdc++.h>
using namespace std;

int main(){
string a;
cin>>a;
if(a[0]!='-')cout<<a<<endl;
else{
if(a.length()<3)cout<<0<<endl;
else{
string cad1="";
string cad2="";
for(int i=0;i<a.length();i++){
if(i!=a.length()-1){
cad1=cad1+a[i];
}
if(i!=a.length()-2){
cad2=cad2+a[i];
}
}

if(cad1.compare("-0")==0 || cad2.compare("-0")==0)cout<<0<<endl;
else{
if(cad1.compare(cad2)>0){
cout<<cad2;	
}
else cout<<cad1;
}
}
}
return 0;
}