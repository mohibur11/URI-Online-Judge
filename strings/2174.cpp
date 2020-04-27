#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> str;
    string x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        str.insert(x);
    }
    cout<<"Falta(m) "<<151-str.size()<<" pomekon(s)."<<endl;
    return 0;
}
