#include <stdio.h>
int main ()
{
    int a[10][10], i, j, m, n, b[10][10];
    printf("Enter the no. of rows and columns respt: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix: ");
    for (i = 0; i<m;i++) {
        for (j=0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");  
    }

    for (i = 0; i <m; i++) {
        for (j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }
    printf("The transpose of the matrix is: \n");
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= m-1; j++){ 
            printf("%d ", b[i][j]);
        }   
        printf("\n");
    }
    printf("\n");
    return 0;
}