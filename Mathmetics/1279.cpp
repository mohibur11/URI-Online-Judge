#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[2005];
    int i,len,rem1,rem2,rem3,rem4,rem5,cnt=0;
    while(scanf("%s", a)!=EOF)
    {
        len=strlen(a);
        rem1=(a[0]-48)%4;
        rem2=(a[0]-48)%100;
        rem3=(a[0]-48)%400;
        rem4=(a[0]-48)%15;
        rem5=(a[0]-48)%55;
        for(i=1;i<len;i++)
        {
            rem1=((rem1*10)+(a[i]-48))%4;
            rem2=((rem2*10)+(a[i]-48))%100;
            rem3=((rem3*10)+(a[i]-48))%400;
            rem4=((rem4*10)+(a[i]-48))%15;
            rem5=((rem5*10)+(a[i]-48))%55;

        }
        //printf("%d %d %d %d %d", rem1,rem2,rem3,rem4,rem5);
        if(cnt!=0)
            printf("\n");
        int tmp=0,tmp1=0,tmp2=0;
        if(rem1==0&&rem2!=0)
            {printf("This is leap year.\n");tmp=1;}
        else if(rem1==0&&rem3==0)
            {printf("This is leap year.\n");tmp=1;}
        if(rem4==0)
            {printf("This is huluculu festival year.\n");tmp1=1;}
        if(rem5==0&&tmp==1)
            {printf("This is bulukulu festival year.\n");tmp2=1;}
        if(tmp==0&&tmp1==0&&tmp2==0)
        printf("This is an ordinary year.\n");
        cnt++;
    }
    return 0;
}
