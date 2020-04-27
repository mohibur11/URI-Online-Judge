#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue < int > card;
    int n, i;
    while( scanf("%d", &n) != EOF)
    {
        int cnt = 0;
        if(n == 0)
            break;
        for(i=1; i<=n; i++)
            card.push(i);
        printf("Discarded cards:");
        while(card.size() != 1)
        {
            if(cnt == 0)
                {printf(" %d", card.front());cnt=1;}
            else
                printf(", %d", card.front());
            card.pop();
            card.push(card.front());
            card.pop();
        }
        printf("\nRemaining card: %d\n", card.front());
        card.pop();
    }
    return 0;
}
