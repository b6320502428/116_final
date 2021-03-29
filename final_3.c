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
    for(i=0; i<n[1]; i++)
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
    }
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
    tmp=0;
    for(j=0; j<n[0]; j++)
    {
        tmp+=ara[j][j];
    }
    if(ch==tmp)
    {
        cor++;
    }
    tmp=0;
    for(j=0; j<n[0]; j++)
    {
        tmp+=ara[j][n[0]-j-1];
    }
    if(ch==tmp)
    {
        cor++;
    }
    if(cor==(2*n[0])+2)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    i=0;
    tmp=0;
    cor=0;
    for(j=0; j<n[1]; j++)
    {
        tmp+=arb[i][j];
    }
    ch=tmp;
    for(i=0; i<n[1]; i++)
    {
        tmp=0;
        for(j=0; j<n[1]; j++)
        {
            tmp+=arb[i][j];
        }
        if(ch==tmp)
        {
            cor++;
        }
    }
    for(i=0; i<n[1]; i++)
    {
        tmp=0;
        for(j=0; j<n[1]; j++)
        {
            tmp+=arb[j][i];
        }
        if(ch==tmp)
        {
            cor++;
        }
    }
    tmp=0;
    for(j=0; j<n[1]; j++)
    {
        tmp+=arb[j][j];
    }
    if(ch==tmp)
    {
        cor++;
    }
    tmp=0;
    for(j=0; j<n[1]; j++)
    {
        tmp+=arb[j][n[1]-j-1];
    }
    if(ch==tmp)
    {
        cor++;
    }
    if(cor==(2*n[1])+2)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    i=0;
    tmp=0;
    cor=0;
    for(j=0; j<n[2]; j++)
    {
        tmp+=arc[i][j];
    }
    ch=tmp;
    for(i=0; i<n[2]; i++)
    {
        tmp=0;
        for(j=0; j<n[2]; j++)
        {
            tmp+=arc[i][j];
        }
        if(ch==tmp)
        {
            cor++;
        }
    }
    for(i=0; i<n[2]; i++)
    {
        tmp=0;
        for(j=0; j<n[2]; j++)
        {
            tmp+=arc[j][i];
        }
        if(ch==tmp)
        {
            cor++;
        }
    }
    tmp=0;
    for(j=0; j<n[2]; j++)
    {
        tmp+=arc[j][j];
    }
    if(ch==tmp)
    {
        cor++;
    }
    tmp=0;
    for(j=0; j<n[2]; j++)
    {
        tmp+=arc[j][n[2]-j-1];
    }
    if(ch==tmp)
    {
        cor++;
    }
    if(cor==(2*n[2])+2)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    return 0;
}
