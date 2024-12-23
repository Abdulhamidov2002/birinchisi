#include <stdio.h>
int main (){
 
 int a;
 printf("Son kiriting:  ");
 scanf("%d" , &a);
 if (a>=0&&a<=9){    
    puts("Bir xonali son.");
 }else if(a>=10&&a<=99){
    puts("Ikki honali son.");
 }else if(a>=100&&a<=999){
    puts("Uch honali son.");
 }else if (a>=1000&&a<=9999){
    puts("To'rt honali son.");
 }else if(a>=10000&&a<=999990){
    puts("Besh honali son.");
 }else{
    puts("Juda katta son.");
 }
 return 0;
 }