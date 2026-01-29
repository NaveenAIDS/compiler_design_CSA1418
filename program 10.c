#include<stdio.h>
int i=0; char str[20];
void E(){ if(str[i]=='i'){ i++; } }
int main(){
    scanf("%s",str);
    E();
    if(str[i]=='\0') printf("Valid");
    else printf("Invalid");
}
