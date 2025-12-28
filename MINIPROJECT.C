#include <stdio.h>

// Function to scan matrix
void scanMatrix(int arr[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] == 1) {
                printf("Danger Zone found at position: (%d, %d)\n", i, j);
            }
        }
    }
}

int main() {
    int rows, cols;
    int arr[10][10];
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements (0 = Safe, 1 = Danger):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    scanMatrix(arr, rows, cols);

    return 0;
}