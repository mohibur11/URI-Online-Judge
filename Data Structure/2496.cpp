#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, n, i, j;
    char a[28];
    scanf("%d", &test );
    while( test-- )
    {
        cin >> n >> a;
        int cnt=0;
        for(i=0; i<n; i++)
        {
            if(a[i]-65 != i)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        cout<< "There are the chance." << endl;
        else
        cout<< "There aren't the chance." << endl;
    }
    return 0;
}

