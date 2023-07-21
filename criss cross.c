#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n[a];
    int m[b];
    int z[a];
    int i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<a;i++)
    {
        z[i]=n[i]+m[b-1];
        b--;
        printf(" %d ",z[i]);
    }

    return 0;
}
