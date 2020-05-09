#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s, v1, v2, t, v;
    while(scanf("%lf %lf %lf", &s, &v1, &v2)!= EOF)
    {
        v = v1-v2;
        if(v > 0)
        {
            t = s/v;
            printf("%.2lf\n", t);
        }
        else
            printf("impossivel\n");
    }
    return 0;
    }
