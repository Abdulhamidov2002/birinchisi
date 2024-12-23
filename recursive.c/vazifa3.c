#include <stdio.h>
#include <ctype.h>
#include <string.h>

void raqamlari(int a){
    if(a==0) return;
    raqamlari(a/10);
    printf(" %d ",a%10);
}
s
int main (){
    int a;
    scanf("%d",&a);
    raqamlari(a);
}