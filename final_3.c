#include <stdio.h>
int main ()
{
    int n[3],i,j,k,ch,cor,tmp;
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    int arr[k][i][j];
    for(k=0; k<3; k++)
    {
        for(i=0; i<n[k]; i++)
        {
            for(j=0; j<n[k]; j++)
            {
                scanf("%d",&arr[k][i][j]);
            }
        }
    }
    for(k=0; k<3; k++)
    {
        i=0;
        tmp=0;
        cor=0;
        for(j=0; j<n[k]; j++)
        {
            tmp+=arr[k][i][j];
        }
        ch=tmp;
        for(i=0; i<n[k]; i++)
        {
            tmp=0;
            for(j=0; j<n[k]; j++)
            {
                tmp+=arr[k][i][j];
            }
            if(ch==tmp)
            {
                cor++;
            }
        }
    }
    return 0;
}
