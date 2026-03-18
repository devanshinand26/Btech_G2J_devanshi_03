
#include <stdio.h>

int main() {
    int x,y,z = 1,i;
    printf("Enter the vaue of x and it's power y\n");
    scanf("%d %d", &x, &y);
    for(i = 1; i <= y; i++)
    {
     z = z * x;
    }
    printf("%d^%d=%d ",x,y,z);
    return 0;
}
