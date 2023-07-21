#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    scanf("%d", &n);
    int arr[MAX_SIZE];
    int i, j, k;

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0; // Flag to indicate if any combination is found

    for(i = 0; i < n - 2; i++) {
        for(j = i+1; j < n - 1; j++) {
            for(k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                    found = 1;
                }
            }
        }
    }

    if(!found) {
        printf("No combination of three elements sums up to 0.\n");
    }

    return 0;
}
