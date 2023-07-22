#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
        {
        int n;
        scanf("%d", &n);
        int a[n];
        int i;
        int present[n + 1];
        for(i=0;i<=n;i++)
        {
            present[i] = 0;
        }

        for (i = 0; i < n; i++)
            {
            scanf("%d", &a[i]);
            if (a[i] >= 1 && a[i] <= n)
             {
                present[a[i]] = 1;
            }
        }
        int missingNumber = 1;
        for (i = 1; i <= n; i++)
        {
            if (present[i] == 0)
             {
                missingNumber = i;
                break;
            }
        }

        printf("%d\n", missingNumber);
    }

    return 0;
}
