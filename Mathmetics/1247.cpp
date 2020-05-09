#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  d, v1, v2,ac,t1,t2;
    while (cin >> d >> v1 >> v2)
    {
        ac = sqrt ( (d*d) + 144 );
        t2 = ac/ v2 ;
        t1 = 12/ v1;
        if (t2 <= t1)
            cout << 'S' << endl;
        else
            cout<< 'N' << endl;
    }

    return 0;
}
