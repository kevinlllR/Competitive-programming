#include<bits/stdc++.h>
using namespace std;

#define MAX 50000
vector<int>v(MAX);

int find(int x)
{
    /*if(x==v[x])return x;
    else return find(v[x]);
    */
    return x==v[x]? x:v[x] = find(v[x]);
}

bool Union(int x, int y)
{
    v[find(x)] = find(y);
}
bool parents(int x, int y)
{
    return find(x)==find(y);
}

int main()
{
    int t;
    string s;
    string m;
    string caracter;
    cin>>t;
    getline(cin,s);
     getline(cin,s);
    int j=1;
    while(t--)
    {
        int i=0;


        getline(cin,caracter);

        int resp=(int)(caracter[0]-'A')+1;

        for(int i=0; i<resp; i++)
        {
            v[i]=i;
        }


        while(getline(cin,m) && !m.empty())
        {
        
            int num1=m[0]-'A';
            int num2=m[1]-'A';

            if(!parents(num1,num2))
            {
                Union(num1,num2);
                resp--;
            }


        }

        if(j!=1){
        cout<<endl;
        }
        cout<<resp<<endl;

        j++;
    }
}
