// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[50][50], i, j, n,sum=0;
    printf("Enter order of matrix ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                 printf("Enter a[%d][%d] ",i,j);
                 scanf("%d", &a[i][j]);
            }
    }
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i==j)||(i+j==n-1)){
                    sum+=a[i][j];
                }
            }
    }
             printf("Sum of diagonal= %d",sum);
    return 0;
}
