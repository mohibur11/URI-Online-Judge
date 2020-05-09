#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double rate,cap,sim,finall,cap1;
    while(cin>>cap>>rate>>n)
    {
        finall=cap+(cap*rate*n);
        sim=cap*rate*n;
        cap1=cap;
        for(i=1;i<=n;i++)
        {
            cap1=cap1+(cap1*rate);
        }
        printf("DIFERENCA DE VALOR = %.2lf\nJUROS SIMPLES = %.2lf\nJUROS COMPOSTO = %.2lf\n",abs(cap1-finall),abs(cap-finall),abs(cap-cap1));
    }
    return 0;
}
