#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
for(int i=1;i<=a;i++){
    int sum=0;
    for(int i2=2;i2<i;i2++){
        if(i%i2==0){
            sum++;
        }
    }
    sum==0 ? printf("%d  ,",i):0;
}
}