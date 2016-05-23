#include <bits/stdc++.h>
struct nodo{

	int x;
	int y;
};
using namespace std;
int main(){
	int n;
cin>>n;

	int x[n][n];
	for (int i = 0; i <n; ++i)
	{
	
		for (int j = 0; j <n; ++j)
		{
			x[i][j]=0;
				}
	}

	int cont=1;
	int a,c;
	vector<int> b;
	for (int i = 0; i < n*n; ++i)
	{
		cin>>a>>c;
		if(x[(a-1)][(c-1)]==0){
		for (int j = 0; j < n; ++j)
		{
			x[(a-1)][j]=1;
		}
		for (int j= 0; j<n; ++j)
		{
			x[j][(c-1)]=1;
		}

	b.push_back(cont);
		
		}
		cont++;
	}
	for (int i = 0; i < b.size()-1; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<b[b.size()-1]<<endl;


	return 0;
}