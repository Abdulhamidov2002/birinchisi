#include <stdio.h>
int main(){
int a=1,sum=0;

while (a){
   int b ;
   scanf("%d",&b);
   if(b>0){
    sum+=b;
   } 
   if(b==0){
    break;
   }
}printf("%d",sum);

}