#include <bits/stdc++.h>
#define MAX 120
using namespace std;
bool cmp(int a,int b){

	return a>b;

}
int main(){
	int n,m;
	cin>>n>>m;
	
	int e=0,d=0;
	int cursos[m][n];
	int a[n][m];
	string cad;
	for (int i = 0; i < n; ++i)
	{
		cin>>cad;
		for (int j = 0; j < m; ++j)
		{
			a[i][j]=cad[j]-48;
			cursos[j][i]=a[i][j];
		}
	}

	for (int i = 0; i < m; ++i)
	{
		sort(cursos[i],cursos[i]+n,cmp);
	}

	int k=0,v=0;
	int cont1=0,cont2=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
		{	
		
		
			if(a[i][j]==cursos[j][0])cont1++;
		}
		
		
		if(cont1!=0)cont2++;
		cout<<endl;
		cont1=0;
	
	}
	cout<<cont2<<endl;
	return 0;
}