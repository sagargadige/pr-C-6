#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    printf("Enter Your String:");
    scanf("%s",&str);
    strcpy(rev,str);
    strrev(rev);
    printf("\nYour reverse string is:%s",rev);
    if(strcmp(str,rev)==0)
    {
        printf("\nYour string is palindrome:");
    }
    else{
        printf("\nYour string is not palindrom");
    }
    
}