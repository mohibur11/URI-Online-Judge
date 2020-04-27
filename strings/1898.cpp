#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[62],b[62],c[62],d[62],id[12];
    cin>>a>>b;
    double x,y;
    int len1,len2,i,cnt=0,cnt1=0,dot=0;
    len1=strlen(a);
    len2=strlen(b);

    printf("cpf ");

    for(i=0; i<len1; i++)
    {
        if(cnt<11&&isdigit(a[i]))
        {
            printf("%c",a[i]);
            cnt++;
        }
        else if(a[i]=='.')
        {
            dot=1;
            c[cnt1++]=a[i];
        }
        else if(isdigit(a[i])&&dot==0)
        {
            c[cnt1++]=a[i];
        }
        else if(isdigit(a[i])&&dot>=1&&dot<3)
        {
            c[cnt1++]=a[i];
            dot++;
        }
    }
    c[cnt1]='\0';

    cnt=0;dot=0;

    for(i=0; i<len2; i++)
    {
        if(isdigit(b[i])&&dot==0)
            d[cnt++]=b[i];
        else if(b[i]=='.')
        {
            dot=1;
            d[cnt++]=b[i];
        }
        else if(isdigit(b[i])&&dot>=1&&dot<3)
        {
            d[cnt++]=b[i];
            dot++;
        }
    }
    d[cnt]='\0';

    sscanf(c,"%lf",&x);
    sscanf(d,"%lf",&y);
    //cout<<endl<<x<<endl<<y<<endl;
    printf("\n%.2lf\n",x+y);
    return 0;
}
