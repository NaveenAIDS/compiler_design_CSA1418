#include<stdio.h>
int main(){
    char ch; int c=0,w=0,l=0;
    while((ch=getchar())!=EOF){
        c++;
        if(ch==' ') w++;
        if(ch=='\n') l++;
    }
    printf("Chars=%d Words=%d Lines=%d",c,w+1,l);
}
