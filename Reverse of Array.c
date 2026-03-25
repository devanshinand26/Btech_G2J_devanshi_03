
#include <stdio.h>
int main() {
    char s[20],rev[20];
    int len = 0,i = 0,j;
    printf("Enter a string\n");
    scanf("%[^\n]s",s);
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    j=len-1;
    i=0;
    while(j>=0)
   {
    rev[i]=s[j];
    i++;
    j--;
   }
rev[i]='\0';
printf("Reverse= %s",rev);
return 0;
}
