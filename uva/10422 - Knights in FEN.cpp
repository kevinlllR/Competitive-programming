#include <bits/stdc++.h>
#define MAX 5
using namespace std;

char matrix[5][5]={'1','1','1','1','1',
				'0','1','1','1','1',
				'0','0','.','1','1',
				'0','0','0','0','1',
				'0','0','0','0','0'};
char matrixn[5][5];
int mx[8]={-2,-2,-1,1,2,2,1,-1};
int my[8]={-1,1,2,2,1,-1,-2,-2};
bool comparar(char x[MAX][MAX]){
for (int i = 0; i < MAX; ++i)
{
	for (int j = 0; j < MAX; ++j)
	{
		if(x[i][j]!=matrix[i][j])return false;
	}
}
return true;
}
int solve(int x,int y,int *cont,int ant1x,int ant1y){
	int aux1=ant1x;
	int aux2=ant1y;
	if(comparar(matrixn)){
		return *cont;
	}
	for (int i = 0; i < 8; ++i)
	{	
		
		int dx=mx[i]+x;
		int dy=my[i]+y;
			if(dx!=ant1x || dy!=ant1y){
				ant1x=x;
				ant1y=y;
			if(dx>0 && dx<MAX && dy>0 && dy<MAX){
				swap(matrix[dx][dy],matrix[x][y]);
				cout<<dx<<" "<<dy<<" "<<ant1x<<" "<<ant1y;
				*cont++;
				solve(dx,dy,&*cont,ant1x,ant1y);
				*cont--;
				ant1x=aux1;
				ant1y=aux2;
				cout<<ant1x<<" "<<ant1y;
				swap(matrix[dx][dy],matrix[x][y]);
			}
			}
			
		}
	
	}

int main(){
	int indx;
	int indy;
	int t;
	cin>>t;
	string aux;
	string cad;
	getline(cin,cad);
	while(t--){
for (int i = 0; i < 5; ++i)
{
	stringstream ss;
	getline(cin,cad);
	ss<<cad;
	ss>>aux;
	cout<<cad;
	for (int j = 0; j < 5; ++j)
	{
		matrixn[i][j]=aux[j];
		if(aux[j]=='.'){
			indx=i;
			indy=j;
		}
	}
	cout<<endl;
}
int cont=0;
int res=solve(indx,indy,&cont,0,0);	
if(res>10){
	cout<<"Unsolvable in "<<res<<" move(s)"<<endl;
}
else{
		cout<<"Solvable in "<<res<<" move";
	if(res==1)cout<<"(s)";
	cout<<endl;
}
	cout<<"HGOla"<<endl;
}
return 0;
}
