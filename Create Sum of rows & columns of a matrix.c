// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[50][50], i, j, c1, r1,rowsum=0, columnsum=0;
    printf("Enter coloumn and row of matrix ");
    scanf("%d %d", &r1, &c1);
    for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                 printf("Enter a[%d][%d] ",i,j);
                 scanf("%d", &a[i][j]);
            }
    }
    for(i=0;i<r1;i++){
         rowsum=0;
            for(j=0;j<c1;j++){
                rowsum+=a[i][j];
            }
             printf("Sum of row %d= %d\n",i+1,rowsum);
    }
    for(j=0;j<c1;j++){
         columnsum=0;
            for(i=0;i<r1;i++){
                columnsum+=a[i][j];
            }
                  printf("Sum of column %d= %d\n",j+1,columnsum);
                
    }
     printf("\n");
    return 0;
}
