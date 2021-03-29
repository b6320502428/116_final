#include <stdio.h>
int main ()
{
    int n,i,max,c=1;
    scanf("%d",&n);
    int like[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&like[i]);
    }
    max=like[0];
    for(i=0;i<n;i++)
    {
        if(max<like[i])
        {
            max=like[i];
            c=1;
        }
        else if(max==like[i])
        {
            c++;
        }
    }
    return 0;
}
