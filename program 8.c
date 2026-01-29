#include<stdio.h>
struct sym{ char name[20]; int addr; } s[10];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        s[i].addr=i;
    }
    for(int i=0;i<n;i++)
        printf("%s %d\n",s[i].name,s[i].addr);
}
