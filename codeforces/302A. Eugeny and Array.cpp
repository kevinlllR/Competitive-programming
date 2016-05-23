#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, x, l, r, e(0), f(0);
    scanf("%d%d", &n, &m);
    while (n--)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            e+= 1;
        }
        else
        {
            f += 1;
        }
    }
    int mayor = min(e, f) * 2;
for(int i=0;i<m;i++)
    {
        scanf("%d%d", &l, &r);
        printf((r - l) % 2 == 1 && r - l < mayor ? "1\n" : "0\n");
    }
    return 0;
}