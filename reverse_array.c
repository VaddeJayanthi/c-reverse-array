#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");

    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

OUTPUT:
Enter number of elements: 3
8756
76856685
76548
Reversed array:
76548 76856685 8756 
