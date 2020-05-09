#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long FP,FH,edge,ver,face;
    int caseno=0;
    while(scanf("%lld %lld", &FP, &FH)!=EOF)
    {
        face = FP+FH;
        edge = (FP*5+FH*6)/2;
        ver = edge +2 -face;
        printf("Molecula #%d.:.\nPossui %lld atomos e %lld ligacoes\n\n", ++caseno, ver, edge);
    }
    return 0;
}
