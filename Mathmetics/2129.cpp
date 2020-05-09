#include<bits/stdc++.h>
using namespace std;
long long a[1000004];
int main()
{
    long long int sum,n,i,cnt=1ll;
    sum=1;
    a[0]=1;a[1]=1;
    for(i=2; i<=1000003; i++)
        {
            sum*=i;

            while(sum%10ll==0ll)
            {
                sum/=10ll;
            }
            if(sum>=1000000000ll)
                sum%=1000000000ll;
            a[i]=sum;
        }
    while(scanf("%lld",&n)!=EOF)
    {


        cout<<"Instancia "<<cnt++<<endl;
        cout<<a[n]%10<<endl<<endl;;
    }
    return 0;
}
