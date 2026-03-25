
#include <stdio.h>

int main() {
    char S[50];
    int len=0, i=0;
    printf("Enter a string\n");
    scanf("%[^\n]S",S);
    while(S[i]!='\0')
    {
        len++;
        i++;
    }
printf("Length of string=%d",len);
    return 0;
}
