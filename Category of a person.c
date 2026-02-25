// Online C compiler to run C program online
#include <stdio.h>

int main() {
int age;
printf("Enter your age-\t");
scanf("%d", &age);
if(age <= 12 && age > 0)
printf("It is the age of a child");
else if(age >= 13 && age <= 17)
printf("It is the age of a teen");
else if(age >= 18 && age <= 60)
printf("It is the age of an adult");
else if(age > 60)
printf("It is the age of a senior citizen");
return 0;
}
