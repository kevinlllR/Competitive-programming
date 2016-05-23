#include <bits/stdc++.h>
using namespace std;
#define MAX1 2e9
typedef long long ll;

int main(){
	int n;
	cin>>n;
	ll a[n];
	ll cont1=0;
	ll cont2=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	ll mayor=0;
	ll menor=MAX1;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>mayor){
			mayor=a[i];
			cont1=1;
		}
		else if(a[i]==mayor)cont1++;
		if(a[i]<menor){
			menor=a[i];
			cont2=1;
		}
		else if(a[i]==menor)cont2++;
	}

	if(mayor==menor)cout<<0<<" "<<cont1*(cont1-1)/2<<endl;
	else cout<<mayor-menor<<" "<<cont1*cont2<<endl;
	return 0;
}