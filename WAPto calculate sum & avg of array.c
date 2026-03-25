
#include <stdio.h>

int main() {
    int arr[100],n,i;
    int sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
     }
    for(i=0;i<n;i++){
    sum = sum + arr[i];
    }
avg=(float)sum/n;
printf("Sum = %d\n",sum);
printf("Average = %2.f\n",avg);
    return 0;
}
