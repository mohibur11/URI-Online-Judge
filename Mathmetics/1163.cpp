#include<bits/stdc++.h>
using namespace std;
#define g 9.80665
#define pi 3.14159

int main()
{
    double h, r, t, v, b, a;
    int p1, p2, n;
    while(scanf("%lf", &h) != EOF)
    {
        scanf("%d %d", &p1, &p2);
        scanf("%d", &n);
        while(n--)
        {
            scanf("%lf%lf", &a, &v);
            b = (a*pi) / 180.00;
            t=(v*sin(b)+sqrt(v*v*sin(b)*sin(b)+2*h*g))/g;
            r=v*cos(b)*t;
            if(r>=p1 && r<=p2) printf("%.5lf -> DUCK\n", r);
            else printf("%.5lf -> NUCK\n", r);
        }
    }
    return 0;
}
