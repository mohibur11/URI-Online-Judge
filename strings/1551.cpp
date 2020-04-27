#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1002];
    int t,i;
    scanf("%d",&t);
    getchar();
    while(t--)
    {int cnt[26]={0},cnt1=0;
        gets(a);
        for(i=0; a[i]; i++)
        {
            if(a[i]=='a')
                cnt[0]++;
            else if(a[i]=='b')
                cnt[1]++;
            else if(a[i]=='c')
                cnt[2]++;
            else if(a[i]=='d')
                cnt[3]++;
            else if(a[i]=='e')
                cnt[4]++;
            else if(a[i]=='f')
                cnt[5]++;
            else if(a[i]=='g')
                cnt[6]++;
            else if(a[i]=='h')
                cnt[7]++;
            else if(a[i]=='i')
                cnt[8]++;
            else if(a[i]=='j')
                cnt[9]++;
            else if(a[i]=='k')
                cnt[10]++;
            else if(a[i]=='l')
                cnt[11]++;
            else if(a[i]=='m')
                cnt[12]++;
            else if(a[i]=='n')
                cnt[13]++;
            else if(a[i]=='o')
                cnt[14]++;
            else if(a[i]=='p')
                cnt[15]++;
            else if(a[i]=='q')
                cnt[16]++;
            else if(a[i]=='r')
                cnt[17]++;
            else if(a[i]=='s')
                cnt[18]++;
            else if(a[i]=='t')
                cnt[19]++;
            else if(a[i]=='u')
                cnt[20]++;
            else if(a[i]=='v')
                cnt[21]++;
            else if(a[i]=='w')
                cnt[22]++;
            else if(a[i]=='x')
                cnt[23]++;
            else if(a[i]=='y')
                cnt[24]++;
            else if(a[i]=='z')
                cnt[25]++;

        }
        for(i=0;i<26;i++)
        {
            if(cnt[i]==0)
                cnt1++;
        }
        if(cnt1==0)
            printf("frase completa\n");
        else if(cnt1<=13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }return 0;
}
