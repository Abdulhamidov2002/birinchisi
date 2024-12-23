#include <stdio.h>
int main(){


float a,natija;
char c;
start:
printf("son kirit:  ");
scanf("%f", &a);
printf("O'chov birligini kirit:");
scanf (" %c",&c);

switch(c){
    case ('s'):
     natija=a/100;
      printf(" natija =%f",natija);
      break;
    case ('d') :
      natija=a/10;
      printf(" nartija = %f M",natija);
      break;
    case ('m') :
      natija=a;
      printf(" nartija = %f M",natija);
      break;
    case ('k') :
      natija=a/1000;
      printf(" nartija = %f M",natija);
      break;
    default :
     puts ("to'g'ri amal kiriting");
     goto start;
}
}