#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,r;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        r=pow(2,a)/12000ll;
        cout<<r<<" kg"<<endl;
    }return 0;
}
