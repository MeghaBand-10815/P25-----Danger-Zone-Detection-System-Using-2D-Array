
#include <stdio.h>

// Function to scan the matrix and display all danger zones
void scanMatrix(int rows, int cols, int arr[rows][cols]) {
    int i, j;
    printf("\n--- Danger Zone Positions ---\n");

    // Traverse each row and column
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {

            // If the current cell has a 1, it is a danger zone
            if (arr[i][j] == 1) {
                printf("Danger at positions (%d, %d)\n", i, j);
            }
        }
    }
}

int main() {
    int rows, cols;
    int i, j;

    // Ask user for the size of the matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Create a 2D array to store the matrix
    int matrix[rows][cols];

    // Input matrix elements where 1 = Danger, 0 = Safe
    printf("Enter matrix elements (1 = Danger Zone, 0 = Safe Zone):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Printing the matrix of entered elements
    printf("Entered Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Call the function to scan the matrix for danger zones
    scanMatrix(rows, cols, matrix);

    return 0;
}

