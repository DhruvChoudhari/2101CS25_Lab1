#include <stdio.h>

void bubble_sort(int a[], int n){
    
    for (int i = 0; i < n; i++) {   // loop n times - 1 per element
        for (int j = 0; j < n - i - 1; j++) { // last i elements are sorted already
            if (a[j] > a[j + 1]) {  // swop if order is broken
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(){
    int a[100], n, i, d, swap;
    printf("Enter total number of elements in the array:\n");
    scanf("%d", &n); 
    printf("Enter the %d integers\n", n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    bubble_sort(a, n);
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}