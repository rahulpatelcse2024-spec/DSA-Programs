#include <stdio.h>
void main() { 
    int LA[] = {1, 3, 5, 6};
    int n = 4;
    int i, j, k;
    printf("The original array elements are :\n");
    for (i = 0; i < n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    printf("enter k to delete element :");
    scanf("%d", &k);
    if (k < 0 || k >= n) {
        printf("Invalid index!\n");}
    else {
        for (j = k; j < n - 1; j++) {
            LA[j] = LA[j + 1];
        }
        n = n - 1; 
        printf("The array elements after deletion :\n");
        for (i = 0; i < n; i++) {
            printf("LA[%d] = %d \n", i, LA[i]);
        }
    }}
