#include<bits/stdc++.h>
using namespace std;

int main()
{char a[20];
    int d1=0,d2=0,h1=0,h2=0,m1=0,m2=0,s1=0,s2=0,s=0,m=0,h=0,d=0;
    scanf("%s %d",a,&d1);
    scanf("%d : %d : %d", &h1,&m1,&s1);
    scanf("%s %d",a,&d2);
    scanf("%d : %d : %d", &h2,&m2,&s2);
    s=s2-s1;
    m=m2-m1;
    h=h2-h1;
    d=d2-d1;
    if(s<0)
    {
        s+=60;
        m--;
    }
    if(m<0)
    {
        m+=60;
        h--;
    }
    if(h<0)
    {
        h+=24;
        d--;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
    return 0;
}
