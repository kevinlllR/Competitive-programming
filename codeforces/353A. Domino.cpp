#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c;
    vector<int> x;
    cin>>a;
    int cont1=0;
    int cont2=0;
    int encontrado=0;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        if((b%2==0 && c%2!=0) || (b%2!=0 && c%2==0))
        {

            encontrado=1;
        }
        cont1=b+cont1;
        cont2=c+cont2;
    }

    if(cont1&1 && cont2&1 && a!=1 && encontrado)
    {

        cout<<"1\n";
    }

    else
    {
        if(cont1&1 || cont2&1)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
    return 0;
}