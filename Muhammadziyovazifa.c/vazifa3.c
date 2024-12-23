#include <stdio.h>
int main (){
 
 int a;
 printf("Hafta kunini kiriting: ");
 scanf("%d", &a);
 if (a==1||a==2||a==3||a==4||a==5){
    puts("Ish kuni.");
 }else if(a==6||a==7){
    puts("Dam olish kuni ;)");
 }else{
    puts("Bunday hafta kuni yo'q");
 }
}