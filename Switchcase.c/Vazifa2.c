#include <stdio.h>

int main() {
int a;
start:
printf("son kiriting max 5 xonali:");

scanf("%d",&a);

switch  (a)  {
   case 1  ... 9 :
     printf("bir xonali son");
     break;
   case 10 ... 99 :
     puts("Ikki honali son");
     break;
   case 100 ... 999 :
     puts("Uch honali son");
     break;
   case 1000 ... 9999:
     puts("Tort honali son");
     break;
   case 10000 ... 99999 :
     puts(" Besh honali son");
     break;
   default :
     puts("max 5 honali son kiriting");
     goto start;
     break;

}
}