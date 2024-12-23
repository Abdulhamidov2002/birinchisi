#include <stdio.h>
#include <ctype.h>
#include <string.h>
 

void  sum(int a,int s){
    if(a==-1) return ;
    a==0 ? printf("0=%d",s):printf("%d+",a);
    s=a+s;sum(a-1,s);
}
int main(){
    int  a;
    scanf("%d",&a);
    sum(a,0);
}