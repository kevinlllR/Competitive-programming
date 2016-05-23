#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int inii=0,inij=0;
	int a[5][5];
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin>>a[i][j];
			if(a[i][j]==1){
			inii=i+1;
			inij=j+1;
		}
		}
	}
	cout<<abs(3-inii)+abs(3-inij)<<endl;
	return 0;
}