#include <stdio.h>

// Function to perform bubble sort in ascending order
void bubbleSortAscending(int arr[], int size) 
{
	int i,j;
    for (i = 0; i < size - 1; i++)
	 {
        for (j = 0; j < size - i - 1; j++)
		 {
            if (arr[j] > arr[j + 1])
			 {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[5],i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++)
	 {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sort the array in ascending order
    bubbleSortAscending(numbers, 5);

    // Display the sorted array
    printf("\nSorted Array in Ascending Order:\n");
    for ( i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

}

