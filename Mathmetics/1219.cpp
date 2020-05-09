#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,aobc,aosc,aot,p,bor,sor;
    while(cin>>a>>b>>c)
    {
        p=(a+b+c)/2;
        aot=sqrt(p*(p-a)*(p-b)*(p-c));

        bor=(a*b*c)/sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        aobc=(M_PI*bor*bor)-aot;
        sor=((p-a)*(p-b)*(p-c))/p;
        aosc=M_PI*sor;
        aot-=aosc;
        printf("%.4lf %.4lf %.4lf\n",aobc,aot,aosc);

    }
    return 0;
}
