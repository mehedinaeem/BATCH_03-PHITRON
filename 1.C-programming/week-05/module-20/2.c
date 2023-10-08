#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[100][100];

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is a unit matrix
    int isUnitMatrix = 1; // Assume it is a unit matrix initially

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                isUnitMatrix = 0; // Not a unit matrix if diagonal elements are not 1
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                isUnitMatrix = 0; // Not a unit matrix if non-diagonal elements are not 0
                break;
            }
        }
    }

    // Output the result
    if (isUnitMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
