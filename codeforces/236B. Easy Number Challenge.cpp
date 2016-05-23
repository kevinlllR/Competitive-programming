#include <iostream>
using namespace std;


int main()
{
    long long a,b,c,ans=0,perma=0;

    int primos[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int x[101][25]= {0};
    cin>>a>>b>>c;
    for(int i=1; i<=100; i++)
    {

        int aux=i;
        for(int j=0; j<25; j++)
        {

            while(aux%primos[j]==0)
            {
                x[i][j]++;
                aux=aux/primos[j];
            }
        }

    }
    int mult=1;


    for(int i=1; i<=a; i++)
    {

        for(int j=1; j<=b; j++)
        {
            int sum=0;
            for(int k=1; k<=c; k++)
            {
                int mult=1;
                for(int m=0; m<25; m++)
                {

                    mult*=(1+x[j][m]+x[k][m]+x[i][m]);

                }

                perma=perma+mult;


            }

        }
    }
    cout<<perma%1073741824<<"\n";
    return 0;
}