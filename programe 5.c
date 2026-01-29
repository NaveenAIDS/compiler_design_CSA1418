#include<stdio.h>
#include<ctype.h>
int main(){
    char str[20];
    scanf("%s",str);
    if(isalpha(str[0])||str[0]=='_')
        printf("Valid Identifier");
    else
        printf("Invalid Identifier");
}
