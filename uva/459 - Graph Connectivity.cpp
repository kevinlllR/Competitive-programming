

#include<bits/stdc++.h>
using namespace std;
#define MAX 5000
map<string,string> v;

string Find(string x)
{
    return x.compare(v[x])==0? x:v[x] = Find(v[x]);
}

bool Union(string x, string y)
{
    v[Find(x)] = Find(y);
}
bool parents(string x, string y)
{
    return Find(x).compare(Find(y))==0;
}

int main()
{
    int n;
    char primer;
    string second;
    cin>>n;
    int primero=1;
    int aux=n;
    int i=0;
    cout<<endl;
    while(n--)
    {
        v.clear();
        int q;
        cin>>primer;
        for(char i=(char)65; i<=(char)primer; i++)
        {
            string aux="";
            v[aux+char(i)]=aux+char(i);
        }
        string x;
        cin.ignore();
        int j=0;
        while(getline(cin,second) && second.size()>0)
        {
            stringstream ss;
            ss<<second;
            ss>>x;
            string aux1,aux2;
            aux1=x[0];
            aux2=x[1];
            if(!parents(aux1,aux2))Union(aux1,aux2);
        }
        map<string,int> root;
        for(map<string,string>::iterator it=v.begin(); it!=v.end(); it++)
        {
            root[Find(it->first)]+=1;
        }
        int maxi = 0;
        for(map<string,string>::iterator it=v.begin(); it!=v.end(); it++)
        {
            if(root[it->first]>0)maxi++;
        }
      if(primero!=1) cout<<"\n";
        cout<<"\n"<<maxi;

    }


}

