#include <bits/stdc++.h>
#define MAXY 1000
#define MAXX 1000
using namespace std;

int di[4]={1,-1,0,0};
int dj[4]={0,0,1,-1};
struct nodo{
int x;
int y;
int d;
nodo(int x1,int y1,int d1):x(x1),y(y1),d(d1){}
nodo(){}
};
char mapa[MAXY][MAXX];

nodo bfs(int initi,int initj,int f,int c){
nodo inicial=nodo(initi,initj,0);
bool marcar[MAXY][MAXX];
memset(marcar,false,sizeof(marcar));
marcar[initi][initj]=1;
queue<nodo> q;
nodo rpt=nodo(initi,initj,0);
q.push(inicial);
int mayor=0;
while(!q.empty()){
	nodo top=q.front();
	rpt=top;
	q.pop();
	
	for(int i=0;i<4;i++){
		int da=top.x+di[i];
		int db=top.y+dj[i];

		if(da>=f || db>=c ||da<=0 || db<=0 || mapa[da][db]!='.' ||marcar[da][db])continue;
			marcar[top.x][top.y]=1;
	
			nodo temp=nodo(da,db,top.d+1);
			q.push(temp);
		
	}
	
	
}
return rpt;
	
}
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int f,c;
		bool otro=true;
		int coori;
		int coorj;
		cin>>c>>f;
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				cin>>mapa[i][j];
			}
		}
		bool found = false;
		 nodo lejano;
		for(int i=0;i<f && !found;++i){
            for(int j=0;j<c && !found;++j){
                if(mapa[i][j]!='.') continue;
                found = true;
                lejano=bfs(i,j,f,c);
                cout<<"Maximum rope length is "<<bfs(lejano.x,lejano.y,f,c).d<<"."<<endl;
            }
        }

	}
	return 0;
}
