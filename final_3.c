#include <stdio.h>
int main ()
{
    int n[3],i,j,k,ch,cor,tmp;
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    int ara[n[0]][n[0]],arb[n[1]][n[1]],arc[n[2]][n[2]];
    for(i=0; i<n[0]; i++)
    {
        for(j=0; j<n[0]; j++)
        {

            scanf("%d",&ara[i][j]);
        }
    }
    /*(i=0; i<n[1]; i++)
    {
        for(j=0; j<n[1]; j++)
        {

            scanf("%d",&arb[i][j]);
        }
    }
    for(i=0; i<n[2]; i++)
    {
        for(j=0; j<n[2]; j++)
        {

            scanf("%d",&arc[i][j]);
        }
    }*/
    i=0;
    tmp=0;
    cor=0;
    for(j=0; j<n[0]; j++)
    {
        tmp+=ara[i][j];
    }
    ch=tmp;
    for(i=0; i<n[0]; i++)
    {
        tmp=0;
        for(j=0; j<n[0]; j++)
        {
            tmp+=ara[i][j];
        }
        if(ch==tmp)
        {
            cor++;
        }
    }
    for(i=0; i<n[0]; i++)
    {
        tmp=0;
        for(j=0; j<n[0]; j++)
        {
            tmp+=ara[j][i];
        }
        if(ch==tmp)
        {
            cor++;
        }
    }
    if(cor==2*n[0])
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
