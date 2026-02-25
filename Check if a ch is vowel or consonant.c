#include<stdio.h>
int main()
{
 char letter;
    printf("Enter letter-\t");
    scanf("%c", &letter);
    if(letter == 'a'||letter == 'e'||letter == 'i'||letter == 'o'||letter == 'u')
    {
    printf("It is a vowel");
    }
    else{
    printf("It is a consonant");
    }
 return 0;
}
