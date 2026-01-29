#include<stdio.h>
int main(){
    char ch;
    int s=0,l=0;
    while((ch=getchar())!=EOF){
        if(ch==' ') s++;
        if(ch=='\n') l++;
    }
    printf("Spaces=%d Lines=%d",s,l);
}
