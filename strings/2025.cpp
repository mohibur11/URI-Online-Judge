#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int tst, v, len, i, j, k, f, str_cnt;
    cin >> tst;
    getchar();
    char b[12] = "Joulupukki";
    char a[105],x[100][1006];
    for(v=1; v<=tst; v++)
    {

        cin.getline(a,105);
        int cnt=1;
        len = strlen(a);
        j = 0;
        k = 0;
        int len1=len;
        if(a[len-1]=='.')
            len1--;
        for(i=0; i<len1; i++)
        {
            if(a[i]==' ')
            {
                cnt++;
                x[j][k]='\0';
                k = 0;
                if((strlen(x[j]) == 10) || (strlen(x[j]) == 11 && x[j][10] == '.'))
                {
                    str_cnt=0;
                    for(f=1; f<=8; f++)
                    {
                        if(x[j][f] == b[f])
                            str_cnt++;
                        else break;
                    }
                    if(str_cnt == 8)
                    {
                        x[j][0] = b[0];
                        x[j][9] = b[9];
                    }
                }
                j++;
            }
            else
            {
                x[j][k++]=a[i];
            }
        }
        x[j][k]='\0';
        if(strlen(x[j]) == 10)
        {
            str_cnt=0;
            for(f=1; f<=8; f++)
            {
                if(x[j][f] == b[f])
                    str_cnt++;
                else break;
            }
            if(str_cnt == 8)
            {
                x[j][0] = b[0];
                x[j][9] = b[9];
            }
        }

        for(i=0; i<cnt; i++)
        {
            if(i==0)
                printf("%s", x[i]);
            else
                printf(" %s", x[i]);
        }
        if(a[len-1]=='.')
            printf(".");
        printf("\n");
    }
    return 0;
}
