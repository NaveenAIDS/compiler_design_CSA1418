#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        printf("Valid Operator");
    else
        printf("Invalid Operator");
}
