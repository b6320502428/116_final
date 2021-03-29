#include <stdio.h>
int main ()
{
    int n,i,max,c=1,only,tmp;
    scanf("%d",&n);
    int like[10000]={0};
    for(i=0; i<n; i++)
    {
        scanf("%d",&tmp);
        like[tmp-1]++;
    }
    max=like[0];
    for(i=0; i<10000; i++)
    {
        if(max<like[i])
        {
            max=like[i];
            c=1;
            only=i+1;
        }
        else if(max==like[i])
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("%d",only);
    }
    else
    {
        for(i=0; i<10000; i++)
        {
            if(max==like[i])
            {
                printf("%d ",i+1);
            }
        }
    }
    return 0;
}
