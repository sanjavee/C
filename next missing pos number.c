#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
        {
        int n;
        scanf("%d", &n);
        int a[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
                a[i]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=1&&a[i]<=n)
             {
                int index=a[i]-1;
                a[index]=-1;
            }
        }

        int missingNumber = 1;
          for(i=0;i<n;i++)
            {
                if (a[i]>=1)
                 {
                    missingNumber = i + 1;
                    break;
                }
            }
          printf("%d\n", missingNumber);
    }
    return 0;
}
