#include <bits/stdc++.h>

using namespace std;
int main(){
int n;
cin>>n;
string s;
getline(cin,s);
while(n--){
getline(cin,s);
if(s.length()<5)cout<<"OMG>.< I don't know!\n";
else{
int res1=s.substr(0,5).compare("miao.");
int res2=s.substr(s.length()-5,s.length()).compare("lala.");
if(res1==0 && res2==0)cout<<"OMG>.< I don't know!\n";
else if(res1==0 && res2!=0)cout<<"Rainbow's\n";
else if(res2==0 && res1!=0)cout<<"Freda's\n";
else if(res2!=0 && res1!=0)cout<<"OMG>.< I don't know!\n";
}
}
return 0;
}