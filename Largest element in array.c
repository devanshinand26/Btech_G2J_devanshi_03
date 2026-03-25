
#include <stdio.h>

int main() {
    int a[50],max,i,n;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter a[%d]=\n",i);
        scanf("%d", &a[i]);
        max = a[0];
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("Largest element= %d",max);
    return 0;
}
