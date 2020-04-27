#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[10],b[10];
    while(n--)
    {
        scanf("%s %s",a,b);
        if(strcmp(a,b)==0)
            printf("empate\n");
        else if((strcmp(a,"tesoura")==0)&&(strcmp(b,"papel")==0||strcmp(b,"lagarto")==0))
            printf("rajesh\n");
        else if((strcmp(a,"tesoura")==0)&&(strcmp(b,"spock")==0||strcmp(b,"pedra")==0))
            printf("sheldon\n");

        else if((strcmp(a,"pedra")==0)&&(strcmp(b,"tesoura")==0||strcmp(b,"lagarto")==0))
            printf("rajesh\n");
        else if((strcmp(a,"pedra")==0)&&(strcmp(b,"spock")==0||strcmp(b,"papel")==0))
            printf("sheldon\n");

        else if((strcmp(a,"lagarto")==0)&&(strcmp(b,"spock")==0||strcmp(b,"papel")==0))
            printf("rajesh\n");
        else if((strcmp(a,"lagarto")==0)&&(strcmp(b,"pedra")==0||strcmp(b,"tesoura")==0))
            printf("sheldon\n");

        else if((strcmp(a,"spock")==0)&&(strcmp(b,"pedra")==0||strcmp(b,"tesoura")==0))
            printf("rajesh\n");
        else if((strcmp(a,"spock")==0)&&(strcmp(b,"papel")==0||strcmp(b,"lagarto")==0))
            printf("sheldon\n");

        else if((strcmp(a,"papel")==0)&&(strcmp(b,"spock")==0||strcmp(b,"pedra")==0))
            printf("rajesh\n");
        else if((strcmp(a,"papel")==0)&&(strcmp(b,"tesoura")==0||strcmp(b,"lagarto")==0))
            printf("sheldon\n");

    }

    return 0;
}
