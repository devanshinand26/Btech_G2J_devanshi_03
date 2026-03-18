
#include <stdio.h>

int main() {
 int i, n, sumeven = 0, sumodd = 0;
 printf("Enter a number: ");
 scanf("%d", &n);
 for(i = 1; i <= n; i++)
{
    if(i % 2 == 0)
    {
        sumeven = sumeven + i;
    }
    else 
    {
        sumodd = sumodd + i;
    }
}
printf("\nSum of even numbers=%d", sumeven);
printf("\nSum of odd numbers=%d", sumodd);
    return 0;
}
