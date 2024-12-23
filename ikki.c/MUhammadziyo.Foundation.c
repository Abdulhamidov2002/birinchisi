#include <stdio.h>

int main(){

  int raqam;
  printf("Hafta kunlarin kirit");
  scanf("%d", &raqam);

  if(raqam==1){
    puts("Dushanba");
  }else if(raqam==2){
    puts("Seshanba");
  }else if(raqam==3){
    puts("chorshanba");
  }else if(raqam==4){
    puts("payshanba");
  }else if(raqam==5){
    puts("juma");
  }else if(raqam==6){
    puts("shanba");
  }else if(raqam==7){
    puts("yakshanba");
  }else{
     puts("bunaqa hafta kuni yoq");}
}