#include <bits/stdc++.h>

using namespace std;

int main(){

    long A(0), B(0), n(0); 
	cin>>A>>B>>n;

    bool possible(1);
    int X(0);

    if(A == 0 && B == 0){cout<<"1\n";}
    else if(A == 0 && B != 0){cout<<"No solution\n";}
    else if(A != 0 && B == 0){cout<<"0\n";}
    else if(B % A != 0){cout<<"No solution\n";}
    else if(A * B < 0 && (n % 2 == 0)){cout<<"No solution\n";}
    else{
        int output = 2 * (A * B > 0) - 1; 
        int sol = output * pow(1.0 * output * B / A, 1.0 / n);

        int ls(A), lsP(A), lsN(A);
        for(int k = 0; k < n; k++){ls *= sol; lsP *= (sol + 1); lsN *= (sol - 1);}

        if(ls == B){cout<<sol<<"\n";}
        else if(lsP == B){cout<<(sol + 1)<<"\n";}
        else if(lsN == B){cout<<(sol - 1)<<"\n";}
        else{cout<<"No solution\n";}
    }

    return 0;
}