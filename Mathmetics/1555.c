#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,y,r,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &x,&y);
        r=pow(3*x,2)+(y*y);
        b=2*(x*x)+(5*y*y*5);
        c=-(100*x)+pow(y,3);
        if(r>b&&r>c)
        printf("Rafael ganhou\n");
        else if(b>r&&b>c)
            printf("Beto ganhou\n");
        else if(c>r&&c>b)
            printf("Carlos ganhou\n");

    }return 0;
}
