#include<stdio.h>
int main()
{
 int i,fact=1,number;
 printf("Enter a number: ");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    int m=fact;
    int count=0;
    while(m>0)
    {
        int rem=m%10;
        if(rem==0)
        {
            count++;
        }
        m=m/10;
    }
    printf("%d",count);

  return 0;
}
