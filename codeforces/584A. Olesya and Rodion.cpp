#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string cad="";
	if(t==10){
		if(n==1)cout<<-1<<endl;
		else
		{
			for(int i=0;i<n-1;i++){
				cad+='1';
			}
			cad=cad+'0';
			cout<<cad<<endl;
		}

	}
	else{
		for (int i = 0; i < n; ++i)
		{
			cad=cad+(char)(t+48);
		}
		cout<<cad<<endl;
	}

	return