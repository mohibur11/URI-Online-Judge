#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, n, i, j;
    scanf("%d", &test );
    while( test-- )
    {
        cin >> n;
        int a[n], cnt=0;
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i] > a[j])
                {
                    a[i] = a[i] + a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                    cnt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
    }
    return 0;
}
