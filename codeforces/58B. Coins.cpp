#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int i=2;
    cin>>a;
    cout<<a<<"\n";
    while(a!=1)
    {

        if(a%i==0)
        {
            int res=a/i;
            a=res;
            i=2;
            cout<<res<<"\n";
        }
        else{
        i++;
        }
    }

    return 0;
}