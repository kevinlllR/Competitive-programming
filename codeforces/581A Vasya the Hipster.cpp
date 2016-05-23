#include <bits/stdc++.h>

using namespace std;
int main(){
int a,b;
cin>>a>>b;
int res1=min(a,b);
int res2=(max(a,b)-res1)/2;

cout<<res1<<" "<<res2<<endl;
return 0;
}