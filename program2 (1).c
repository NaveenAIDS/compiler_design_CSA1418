#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    gets(str);
    if(strncmp(str,"//",2)==0)
        printf("Single line comment");
    else if(strncmp(str,"/*",2)==0 && strstr(str,"*/"))
        printf("Multi line comment");
    else
        printf("Not a comment");
}
