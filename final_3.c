#include <stdio.h>
int main ()
{
    int a,b,c,i,j;
    scanf("%d %d %d",&a,&b,&c);
    int ara[a][a],arb[b][b],arc[c][c];
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=0; i<b; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&arb[i][j]);
        }
    }
    for(i=0; i<c; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arc[i][j]);
        }
    }
    return 0;
}
