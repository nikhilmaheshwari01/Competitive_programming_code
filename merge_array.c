#include <stdio.h>

int main() {
    int arr1[100], arr2[100], mergedArray[200];
    int size1, size2;

   
    scanf("%d", &size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size and elements of the second array
    scanf("%d", &size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays into mergedArray
    int mergedSize = size1 + size2;
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    // Print the merged array
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
