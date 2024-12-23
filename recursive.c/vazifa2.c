#include <stdio.h>
#include <string.h>
#include <ctype.h>

void togri(int a,int b){
    if(a>b) return;
    printf("%d ",a);
    togri(a+1,b);
}

void teskari(int a,int b){
    if(a<b) return;
    
    printf("%d ",a);
    teskari(a-1,b);
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b) togri(a,b);
    else{
        teskari(a,b);
    }
}