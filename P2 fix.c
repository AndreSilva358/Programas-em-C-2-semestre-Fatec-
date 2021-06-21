#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int i, j, k;

    printf("Quantas camadas estão presentes:");
    scanf("%d", &n);

    if (n > 40) {
        return 0;
    }

    int matrixSize = ((2*n)+1);

    // Declare matrix sized n+1 x 2*n+1
    char matrix[n+1][matrixSize];

    // Filling matrix
    for(i=0;i<=n;i++){
        char reverse[n]; // array to store reverse line sequence
        for(j=0;j<=n;j++){
            if((i==j)&&(i==n-1)) {
                matrix[i][j] = '*';
            }

            if(j>=i) {
                // int value = n-i-1;
                int value = (n-i-1)%10;
                matrix[i][j] = value+'0';
                reverse[n-1-j] = matrix[i][j];
            }

            if(i>j) {
                // int value = n-j-1;
                int value = (n-j-1)%10;
                matrix[i][j] = value+'0';
                reverse[n-1-j] = matrix[i][j];
            }
        }

        for(k=n+1;k<=matrixSize;k++) {
            matrix[i][k] = reverse[k-n-1];
        }
    }


    // Print matrix upper half plus center
    for(i=0;i<n+1;i++){
        for(j=0;j<matrixSize;j++){
            if((i==j)&&(i==n)) {
                printf("*");
            } else {
                printf("%c", matrix[i][j]);
            }
        }
        printf("\n");
    }

    // Print matrix lower half
    for(i=n-1;i>=0;i--){
        for(j=0;j<matrixSize;j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
