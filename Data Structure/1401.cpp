#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        do
        {
            cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end()));
        cout<<endl;
    }
    return 0;
}
