/*** Bismillahir Rahmanir Rahim ***/

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tst;
    long long a,b;
    cin >> tst;
    while(tst--)
    {
        cin >> a >> b;
        cout << ceil((double)a/b)<<endl;
    }
    return 0;
}
