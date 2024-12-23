#include <stdio.h>
int main (){
    
int a ,f1=0,f2=1,f3=1;

scanf("%d",&a);
printf("%d\n%d\n",f1,f2);
for (int f1=1; f1<a;f1){
   printf("%d\n",f1);
    f1=f2+f3;
    
    f3=f2;
    f2=f1;
}
}y