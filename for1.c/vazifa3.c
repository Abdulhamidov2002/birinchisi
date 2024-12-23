#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
srand(time(NULL));

int son=rand(),sum;

for (int i=son;i;i/=10){
    sum+=i%10;
}
printf(" %d ning raqamlar yeg'indisi = %d",son,sum);
}