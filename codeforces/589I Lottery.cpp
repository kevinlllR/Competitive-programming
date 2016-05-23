#include <bits/stdc++.h>
#define MAX 500
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int a[MAX];
set<int> s;
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
	s.insert(a[i]);
}

int cont=0;

map<int,int> m;
for (int i = 0; i < n; ++i)
{
	for (set<int,int>::iterator it = s.begin(); it!=s.end(); it++)
	{
		if(a[i]==*it)m[a[i]]++;
	}
}

for (map<int,int>::iterator it=m.begin() ;it!=m.end();it++)
{

	if(it->second>n/k){

		cont=cont+it->second-n/k;
	}
	
}

cout<<cont<<endl;
	return 0;
