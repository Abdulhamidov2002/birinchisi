#include <stdio.h>
int main(){
int a,x ;
scanf("%d",&a);
for(x=a;x>10;x/=10){
}
printf("%d---> birinchi raqam %d va oxrgi raqam %d \n",a,x,a%10);
printf("%d---> oxrgi raqam %d va birinchi raqam %d ",a,a%10,x);
}