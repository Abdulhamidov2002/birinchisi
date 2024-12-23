#include <stdio.h>
int main(){
  char a,b;
  puts("Harf kiriting: ");
  scanf("%c",&a);
  if (a>=97&&a<=122){
     b=a-32;
     printf("'%c'",b);
  }else if(a>=65&&a<=90){
     printf("'%c'",a);
  }else{
     printf("Bunday harf yo'q ;) ");
  }    



















}