#include<bits/stdc++.h>
using namespace std;

#define MAX 500000
//inicializa arbol a 0
vector<int>v(MAX);
//inicializa raiz a 0
vector<int>root(MAX);

//con esto buscas el padre de un nodo
int find(int x)
{
    /*if(x==v[x])return x;
    else return find(v[x]);
    */
    return x==v[x]? x:v[x] = find(v[x]);
}
//con estos unes 2 nodos(y sus nodos hijos)
bool Union(int x, int y)
{
    //antes de actualizar padres
    root[find(y)]=root[find(x)]+root[find(y)];
    v[find(x)] = find(y);

}
//ves si 2 nodos tienen el mismo padre
bool parents(int x, int y)
{
    return find(x)==find(y);
}

int main()
{
    int n;
    string s;
//casos
    cin>>n;
//captura salto de linea
    getline(cin,s);
    int k;
    while(n--)
    {
        int cont1=0,cont2=0;
        cin>>k;
	//inicializas nodo y raiz
        for(int i  = 1; i<=2*k; ++i)
        {
            v[i] = i;
            root[i]=1;
        }
        string x,y;
        int i=1;
	//map para relacionar caracteres con enteros(mayor facilidad)
        map<string,int> m;
       cin.ignore();
        while(k--)
        {
            getline(cin,s);
            int res=0;
	   //flujo para capturar cadenas
            stringstream ss;
            ss<<s;
            ss>>x>>y;

            if(m[x]==0) m[x]=i,i++;
            if(m[y]==0) m[y]=i,i++;

            if(!parents(m[x],m[y]))
            {
                /*    cout<<x<<" "<<y<<endl;
                    cout<<m[x]<<" "<<m[y]<<endl;
                    cout<<find(m[x])<<" "<<find(m[y])<<endl;
                    cout<<root[find(m[x])]<<root[find(m[y])]<<endl;*/
		//unes nodos
                Union(m[x],m[y]);
		//buscas raiz
                res=root[find(m[y])];

            }
            else
            {
                res=root[find(m[x])];
            }
		//respuesta
            cout<<res<<endl;
            //  cout<<"==============="<<endl;

        }


    }
}
