#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    srand(time(NULL));

    int son=rand(),sum=0;

    for(int i=son; i ; i/=10 ){
        sum++;
    }
    printf("%d soni %d honali son",son,sum);
}