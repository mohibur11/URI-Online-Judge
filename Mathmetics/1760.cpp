#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double area,area1,n;
    while(scanf("%lf",&n)!=EOF)
    {
        double b = 3.00;
        area=.433012701892219323381*n*n;
        for(i=1;i<=200;i++)
        {
            n/=3;
            area += .433012701892219323381*n*n*b;
            b *= 4.00;
        }printf("%.2lf\n",area);
    }
    return 0;
}
