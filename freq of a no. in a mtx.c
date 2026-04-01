// Online C compiler to run C program online
#include <stdio.h>
int main(){
 int a[50][50], i, j, c, r, num, count=0;
    printf("Enter coloumn and row of matrix ");
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
         printf("Enter a[%d][%d] ",i,j);
         scanf("%d", &a[i][j]);
        }
    }
printf("Enter number to find in the matrix: ");
scanf("%d", &num);
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(a[i][j]==num){
            count++;
        }
    }
}
printf("Frequency of %d= %d", num,count);
return 0;
}
