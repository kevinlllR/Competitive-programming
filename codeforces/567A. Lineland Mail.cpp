#include <bits/stdc++.h>

bool cmp(int a,int b)
{

    return a<b;
}
using namespace std;

int main()
{

    int a,y;
    vector<long long> x;


    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>y;
        x.push_back(y);
    }

    if(x.size()==2)
    {
        for(int i=0; i<2; i++)
        {
            cout<<abs(x[0]-x[1])<<" "<<abs(x[0]-x[1])<<"\n";

        }

    }
    else
    {
        int k=0;
        int mayor;
A. Whose sentence is it?

        long long maximo,minimo;
        for(int i=0; i<x.size(); i++)
        {
            maximo=max(abs(x[i]-x[0]),abs(x[i]-x[x.size()-1]));
            minimo=min(abs(x[i]-x[i-1]),abs(x[i]-x[i+1]));
            cout<<minimo<<" "<<maximo<<"\n";
        }




    }

    return(0);
}