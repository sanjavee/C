
 n  -->array size
a[i]-->patient's age


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]<17)
        {
            sum=sum+200;
        }
        else if(a[i]>=17 && a[i]<40)
        {
            sum=sum+400;
        }
        else
        {
            sum=sum+300;
        }
    }
    printf("%d",sum);
    return 0;
}
