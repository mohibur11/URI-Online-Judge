#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,m,n,c;
    int cnt=1;
    while(scanf("%lf",&r)!=EOF)
    {
        if(r==0)
            break;
        scanf("%lf %lf",&n,&m);
        r*=2;
        c=sqrt((n*n)+(m*m));
        if(r>=c)
            printf("Pizza %d fits on the table.\n",cnt++);
        else
            printf("Pizza %d does not fit on the table.\n",cnt++);
    }
    return 0;
}
