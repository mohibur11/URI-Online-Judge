#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;double x;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        double a[n],sum=0.0;
        for(int i=0;i<n;i++)
            { scanf("%lf",&a[i]);sum+=a[i];}
        //cout << sum << endl;
        sum/=(double)n;
//cout << sum << endl;
        double sum1 = 0;
        for(int i=0;i<n;i++)
        {
            if(sum<a[i])
            {
                x = (a[i]-sum)*1000.0;
                sum1+=int(x);
            }

        }//cout << sum1 << endl;
        sum1/=1000.0;
        printf("$%.2lf\n", sum1);

    }
    return 0;
}
