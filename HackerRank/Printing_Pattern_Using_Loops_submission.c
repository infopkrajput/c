#include <stdio.h>

int main() {
    int n; 
    scanf("%d",&n);
    int mat[2 * n - 1][2 * n - 1]; 

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            mat[i][j] = n;
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = i; j < 2 * n - i - 1; j++) {
            for (int k = i; k < 2 * n - i - 1; k++) {
                mat[j][k] = n - i;
            }
        }
    }
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}