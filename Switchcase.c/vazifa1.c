#include <stdio.h>
int main(){
int a,b;   
start:
printf("Kunni kiriting :");
scanf("%d",&a);

printf("Oyni kiriting : ");
scanf(" %d",&b);

switch(a){
    case 1 ... 31:
      printf("%d - ",a);
      break;
    default:
      puts("Bunday oy kuni mavjud emas;");
      goto start;
}

switch (b)
{
    case 1:
      printf("Yanvar");
      break;
    case 2:
      printf("Fevral");
      break;
    case 3:
      printf("mart");
      break;
    case 4:
      printf("aprel");
      break;
    case 5:
      printf("may");
      break;
    case 6:
      printf("iuyn");
      break;
    case 7:
      printf("iyul");
      break;
    case 8:
      printf("avgust");
      break;
    case 9:
      printf("sentabr");
      break;
    case 10:
      printf("oktabr");
      break;
    case 11:
      printf("noyabr");
      break;
    case 12:
      printf("dekabr");
      break;
    default:
      printf("Oyni togri kiriting !");
      goto start;
}

}