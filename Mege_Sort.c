#include <stdio.h>
 
void merge_sort(int i, int j, int a[], int aux[]) {
    if (j <= i) {
        return;  
    }
    int mid = (i + j) / 2;
    
    merge_sort(i, mid, a, aux);     // sort the left sub-array recursively
    merge_sort(mid + 1, j, a, aux);     // sort the right sub-array recursively

    int pointer_left = i, pointer_right = mid + 1;       // pointer_left points to the beginning of the left sub-array , pointer_right points to the beginning of the right sub-array

    for (int k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {      // left pointer has reached the limit
            aux[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == j + 1) {        // right pointer has reached the limit
            aux[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) {        // pointer left points to smaller element
            aux[k] = a[pointer_left];
            pointer_left++;
        } else {        // pointer right points to smaller element
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (int k = i; k <= j; k++) {  
        a[k] = aux[k];
    }
}


int main() {
    int n, i, d, swap;

    printf("Enter total number of elements in the array:\n");
    scanf("%d", &n);
    int  a[n], aux[n];
    printf("Enter the %d integers of array\n", n);

    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

    merge_sort(0, n - 1, a, aux);

    printf("The sorted array is :\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}