#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,big,loc,t;
    char a[202];
    scanf("%d",&t);
    getchar();
    while(t--)
    {int cnt[26]= {0};
        gets(a);
        for(i=0; a[i]; i++)
        {
            if(a[i]=='A'||a[i]=='a')
                cnt[0]++;
            else if(a[i]=='B'||a[i]=='b')
                cnt[1]++;
            else if(a[i]=='C'||a[i]=='c')
                cnt[2]++;
            else if(a[i]=='D'||a[i]=='d')
                cnt[3]++;
            else if(a[i]=='E'||a[i]=='e')
                cnt[4]++;
            else if(a[i]=='f'||a[i]=='F')
                cnt[5]++;
            else if(a[i]=='G'||a[i]=='g')
                cnt[6]++;
            else if(a[i]=='H'||a[i]=='h')
                cnt[7]++;
            else if(a[i]=='I'||a[i]=='i')
                cnt[8]++;
            else if(a[i]=='j'||a[i]=='J')
                cnt[9]++;
            else if(a[i]=='K'||a[i]=='k')
                cnt[10]++;
            else if(a[i]=='L'||a[i]=='l')
                cnt[11]++;
            else if(a[i]=='M'||a[i]=='m')
                cnt[12]++;
            else if(a[i]=='N'||a[i]=='n')
                cnt[13]++;
            else if(a[i]=='O'||a[i]=='o')
                cnt[14]++;
            else if(a[i]=='P'||a[i]=='p')
                cnt[15]++;
            else if(a[i]=='Q'||a[i]=='q')
                cnt[16]++;
            else if(a[i]=='R'||a[i]=='r')
                cnt[17]++;
            else if(a[i]=='S'||a[i]=='s')
                cnt[18]++;
            else if(a[i]=='T'||a[i]=='t')
                cnt[19]++;
            else if(a[i]=='U'||a[i]=='u')
                cnt[20]++;
            else if(a[i]=='V'||a[i]=='v')
                cnt[21]++;
            else if(a[i]=='W'||a[i]=='w')
                cnt[22]++;
            else if(a[i]=='X'||a[i]=='x')
                cnt[23]++;
            else if(a[i]=='Y'||a[i]=='y')
                cnt[24]++;
            else if(a[i]=='Z'||a[i]=='z')
                cnt[25]++;

        }
        big=cnt[0];
        loc=0;
        for(i=1; i<26; i++)
        {
            if(big<cnt[i])
            {
                big=cnt[i];
                loc=i;
            }
        }

        for(i=0; i<26; i++)
        {
            if(cnt[i]==big)
                printf("%c", i+97);
        }printf("\n");

    }return 0;
}
