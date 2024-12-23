#include <stdio.h>
int main (){
 
int a,b;

start:
printf("Kunni kiriting ");
scanf("%d",&a);

printf("Oyni kiriting ");
scanf(" %d",&b);


switch (a/10)
{
case 1:
   printf("On");
   break;
case 2:
   printf("Yigirma "); break;
case 3:
   printf("O'ttiz "); break;
default: printf("bunday oy yoq ");
   goto start;
   break;
}

switch (a%10)
{
case 0:
   printf("inchi ");
   break;
case 1:
    printf(" birinchi  ");
    break;
case 2 :
    puts("ikkinchi ");
    break;
case 3:
    puts("uchinchi ");
    break;
case 4:
    puts("tortinchi ");
    break;
case 5:
    puts("beshinchi ");  
    break;
case 6:
    puts("oltinchi ");
    break;
case 7:
    puts("yettinchi ");
    break;
case 8:
    puts("sakkizinci ");     
    break;       
case 9:
    puts("tooqizinchi ");
    break;
default: goto start;
   break;
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
      printf("Togri kirit !");
      goto start;
      break;
}

}
