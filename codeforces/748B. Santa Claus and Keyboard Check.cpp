#include <bits/stdc++.h>

using namespace std;
struct nodo{
int cant;
char movio;
};

struct nodo2{
char a;
char b;
};
int main(){
	string a;
	string b;
	cin>>a>>b;
	bool flag1=false;
	map<char,char> validar;
	map<char,char> validar2;
	for(int i=0;i<a.length();i++){
		validar[b[i]]='1';
		validar2[a[i]]='1';
	}
	for(int i=0;i<a.length();i++){
		//cout<<validar[b[i]]<<" "<<a[i]<<" "<<validar2[a[i]]<<" "<<b[i]<<endl;
		if(validar[b[i]]!=a[i] && validar[b[i]]!='1'){
			flag1=true;
			break;
		}
		if(validar2[a[i]]!='1' && validar2[a[i]]!=b[i]){
			flag1=true;
			break;
		}
		validar[b[i]]=a[i];
		validar2[a[i]]=b[i];
	}
	if(a.compare(b)==0)cout<<0<<endl;
	else if(flag1)cout<<-1<<endl;
	else{
	map<char,nodo> m1;
	map<char,nodo> m2;
	for(int i=0;i<a.length();i++){
		nodo v;
		v.cant=0;
		v.movio='2';
		m2[a[i]]=v;
		m1[b[i]]=v;
	}
		for(int i=0;i<a.length();i++){
			m1[b[i]].cant++;
			m2[a[i]].cant++;
		}
		
		vector<nodo2> va;
		int cont=0;
		bool flag=false;
		for(int i=0;i<a.length();i++){
			if(a[i]!=b[i]){
				if(m1[b[i]].cant!=0){
					
//					cout<<m1[b[i]].movio<<" "<<a[i]<<endl;
					if(m1[b[i]].movio==a[i])continue;
					if(m1[b[i]].movio!='2'){
						flag=true;
						break;
						
					}
					if(m2[a[i]].movio!='2'){
						flag=true;
						break;
					}
					nodo2 aux;
					aux.a=a[i];
					aux.b=b[i];
					va.push_back(aux);
					cont++;
					m1[a[i]].movio=b[i];
					m1[b[i]].movio=a[i];
					m2[a[i]].movio='3';
					swap(m1[a[i]].cant,m1[b[i]].cant);
				}
				
				
			}
			
		}
		if(!flag){
		cout<<cont<<endl;
		for(int i=0;i<va.size();i++){
			cout<<va[i].a<<" "<<va[i].b<<endl;
		}
		}
		else cout<<-1<<endl;
	}
	return 0;
}
