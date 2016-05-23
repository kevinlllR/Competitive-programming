#include <bits/stdc++.h>

int mcd(int a,int b)
{

    if(b==0) return a;
    else mcd(b,a%b);
}
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int sum=0;
        for(int i=2; i<=a-1; i++)
        {

            int pormientras=a;
            while(pormientras!=0)
            {

                int aux=pormientras%i;
                pormientras/=i;
                sum=sum+aux;

            }

        }

        cout<<sum/mcd(sum,a-2)<<"/"<<(a-2)/mcd(sum,a-2)<<"\n";
    }
    return 0;
}