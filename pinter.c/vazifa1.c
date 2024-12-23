#include <stdio.h>

void kattasi(int a,int *maks){
    for (;a;a/=10){
        if(*maks<a%10){
            *maks=a%10;
        }
    }
} 
int main(){
    int b,max=0;
    scanf("%d",&b);
    kattasi(b,&max);
    printf(" max = %d",max);
}