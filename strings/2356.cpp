#include <bits/stdc++.h>
using namespace std;
int main()
{
    string d, s;
    while(cin >> d >> s)
    {
        int ans;
        ans = d.find(s);
        cout << ((ans != -1)?"Resistente":"Nao resistente") << endl;
    }
    return 0;
}
