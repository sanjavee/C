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
        int i, j;
        for (i = 0; i < n; i++)
            {
            scanf("%d", &a[i]);
            }
        int temp;
        for (i = 0; i < n; i++)
            {
            for (j = i + 1; j < n; j++)
                {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for (i=0;i<n;i++)
            {
            printf("%d ",a[i]);
        }
        printf("\n");
    }

    return 0;
}
