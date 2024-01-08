#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort in ascending order
void bubbleSortAsc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to perform bubble sort in descending order
void bubbleSortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int choice;
    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    if (choice == 1) {
        bubbleSortAsc(arr1, n);
        bubbleSortAsc(arr2, n);
    } else if (choice == 2) {
        bubbleSortDesc(arr1, n);
        bubbleSortDesc(arr2, n);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 1; // Exit with an error code
    }

    printf("Sorted first array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSorted second array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}
