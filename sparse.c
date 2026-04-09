#include <stdio.h>
int main() {
int matrix[10][10],sparse[50][3];
int i,j,rows,cols,k = 0;
printf("enter rows and columns:");
scanf("%d%d",&rows,&cols);
for(i=0;i<rows;i++)
{
    for(j=0;j<cols;j++)
    {
        scanf("%d",&matrix[i][j]);
    }
}
for (i=0;i<rows;i++)
{
    for(j=0;j<cols;j++)
    {
        if(matrix[i][j]!=0)
        {
            sparse[k][0] = i;
            sparse[k][1] = j;
            sparse[k][2] = matrix[i][j];
            k++;
        }
    }
}
 printf("\nSparse Matrix Representation (rows=%d, cols=%d, non-zero=%d):\n", rows, cols, k);
    printf("Row\tCol\tValue\n");
    for (i = 0; i < k; i++) {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}