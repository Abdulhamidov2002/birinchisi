#include <stdio.h>
int main(){
int a=1,b=7,sum=0;
while(a<=b){
    int k;
    scanf("%d",&k);
    sum+=k;
    a++;
}printf("%d",sum);
}