#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

int nextPermutation(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1])
        i--;

    if (i < 0) {
        reverse(arr, 0, n - 1);
        return 0;
    }
    int j = n - 1;
    while (arr[j] <= arr[i])
        j--;
        
    swap(&arr[i], &arr[j]);
    reverse(arr, i + 1, n - 1);
    return 1; 
}

int main() {
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (nextPermutation(arr, n)) {
        printf("Next permutation: ");
    } else {
        printf("No next permutation. First permutation: ");
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}

