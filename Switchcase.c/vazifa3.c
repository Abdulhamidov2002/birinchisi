#include <stdio.h>
int main(){

char a;
start:
printf("Bitta harf kiriting :");
scanf(" %c", &a);

switch (a) {
    case 'a' ... 'z' :
       printf("Kichik harf.");
       break;
    case 'A' ... 'Z':
       printf("Katta harf.\n");
       break;
    default :
       printf(" Harf kiriting iltimos!");
       goto start;   
}
}