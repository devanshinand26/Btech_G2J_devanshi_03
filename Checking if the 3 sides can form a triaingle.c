#include<stdio.h>
int main()
{
int a, b , c;
printf("Enter the value of side 'a'\n");
scanf("%d", &a);
printf("Enter the value of side 'b'\n");
scanf("%d", &b);
printf("Enter the value of side 'c'\n");
scanf("%d", &c);
if(a+b>c && a+c>b && b+c>a)
{
    printf("These sides can form a triangle");
    if(a == b && b == c && c == a)
     printf("and it is an equilateral triangle.");
    else if(a == b || b == c || c == a)
     printf("and it is an isosceles triangle.");
    else
    printf("and it is a scalene triangle.");
}
else
printf("These sides can not form a traingle.");
return 0;
}
