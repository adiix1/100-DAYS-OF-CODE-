#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0], second = -1e9; // assume very small second

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    printf("Second largest element: %d\n", second);
    return 0;
}
