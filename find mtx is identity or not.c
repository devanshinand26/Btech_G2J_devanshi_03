// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[50][50], i, j, c, r;
    printf("Enter coloumn and row of matrix ");
    scanf("%d %d", &r, &c);
    if(r!=c)
       { printf("It is not square matrix");
    }
    else{
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
         printf("Enter a[%d][%d] ",i,j);
         scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++){
     for(j=0;j<c;j++){
       if((i==j &&a[i][j]==1)&&(i!=j &&a[i][j]==0))
    printf("Matrix is identity matrix");
       else
    printf("Matrix is not an identity matrix\n");
}
}
}
    return 0;
}
