#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    int res=a[n-1]+a[n-2];
    printf("%d",res);
}
