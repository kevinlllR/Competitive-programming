#include <iostream>

using namespace std;
int main()
{
    string s;
    int a[100001], m, l, r;

    cin>>s;
     cin>>m;
   

    a[1] = 0;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }

    while (m--)
    {
        cin>>l>>r;
        cout<<(a[r] - a[l])<<"\n";
    }
    return 0;
}