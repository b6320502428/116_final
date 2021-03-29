#include <stdio.h>
#include <string.h>
int main ()
{
    int n,k,ch=0,i;
    char c[2],ks[7];
    scanf("%d %s",&n,c);
    for(k=n; 1; k++)
    {
        sprintf(ks,"%d",k);
        for(i=0; i<strlen(ks); i++)
        {
            if(ks[i]==c[0])
            {
                ch=1;
            }
        }
    }
    return 0;
}
