#include <bits/stdc++.h>
#define MAX 10001
#define fi(i,j,k) for(int i=j;i<k;i++)
#define pb push_back
using namespace std;
int important[MAX];
int d[MAX];
bool visitados[MAX];
bool cmp(int a,int b){
	return a>b;
}
int bfs(vector<int> v[MAX],int inicio,int dim,int impo){
queue<int> q;
q.push(inicio);
fi(i,1,dim+1){d[i]=0;
visitados[i]=false;}
visitados[inicio]=true;
while(!q.empty()){
	int aux=q.front();
	q.pop();
	fi(k,0,v[aux].size()){
		if(!visitados[v[aux][k]]){
			int res2=v[aux][k];
			visitados[res2]=true;
			d[res2]=d[aux]+1;
			q.push(res2);

		}
	}
}
int cont=0;
fi(k,0,impo){
	cont+=d[important[k]];
}

return cont;

}
int main(){
	int t,n,l,a;
	cin>>t;
	while(t--){
		cin>>n>>l;
		int aux[n];
		vector<int> v[MAX];
		fi(k,0,n)important[k]=0;
		int d=0;
		map<int,int> m;
		fi(i,0,l){
			while(cin>>a && a!=0){
				aux[d++]=a;
				m[a]++;
			}
			fi(j,0,d-1){
				v[aux[j]].pb(aux[j+1]);
				v[aux[j+1]].pb(aux[j]);
			}

		}
		d=0;
		map<int,int>::iterator it;
		for(it=m.begin();it!=m.end();it++){
			if(it->second>1){
				important[d++]=it->first;
			}
		}

		int mini=bfs(v,important[0],n,d);
		
		int ind=important[0];
		fi(k,1,d){
			int res2=bfs(v,important[k],n,d);
			if(res2<mini){
				mini=res2;
				ind=important[k];
			}
			else if(res2==mini){
				mini=res2;
				ind=min(important[k],ind);
			}
		}
		cout<<"Krochanska is in: "<<ind<<endl;


	}

	return 0;	
}