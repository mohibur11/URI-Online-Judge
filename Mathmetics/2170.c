#include<stdio.h>
int main()
{
    double x,y,z;
    int i=1;
    while(scanf("%lf%lf",&x,&y)!=EOF)
    {z=(double)((y-x)/x)*100.00;
        printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2lf %%\n\n",i,z);
        i++;
    }
    return 0;
}
