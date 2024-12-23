#include <stdio.h>

void almashtirish(int a, int *ptr){
    for(;a;a/=10){
        *ptr=(*ptr+a%10)*10;
    }
    *ptr=*ptr/10;
}
int main(){
    int a, b=0;
    scanf("%d",&a);
    almashtirish(a,&b);
    printf("%d",b);
}