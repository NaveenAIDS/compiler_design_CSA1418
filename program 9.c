#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    scanf("%s",str);
    if(strcmp(str,"ab")==0)
        printf("Valid String");
    else
        printf("Invalid String");
}
