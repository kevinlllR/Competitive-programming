#include <bits/stdc++.h>
int gdc(int a,int b)
{

    if(b==0) return a;
    else return gdc(b,a%b);
}
int mcm(int a,int b)
{
    return a*b/gdc(a,b);
}
using namespace std;
int main()
{

    int n;


    cin>>n;


    if(n<=2)
    {

        cout<<n<<"\n";

    }
    else
    {
        int maximo1=n;
        int maximo2=n-1;
        long long resultado=maximo1*maximo2*(n-2);

        long long ans=0;
        for(int i=2; i<n; i++)
        {
            int gd1=gdc(n,n-i);
            int gd2=gdc(n-1,n-i);

            ans=max(ans,(long long)n*(n-1)*(n-i)/gd1*gd2);

            if(gd1==1 && gd2==1)
            {

                break;
            }

        }


        if(n%2==0)
        {

            cout<<max(ans,(long long)(n-1)*(n-2)*(n-3))<<"\n";
        }
        else{
        cout<<ans<<"\n";
        }



}
return 0;
}