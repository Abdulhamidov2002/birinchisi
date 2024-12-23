#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int kuchu;

void printfarr( kuchu  n , kuchu   arr[n][n]){
    for(kuchu i=0;i<n;i++){
        for(kuchu  j=0;j<n;j++){
            arr[i][j]=rand()%100;
            printf(" %2d ",arr[i][j]);
        }
        puts("");
    }   
}

void yulduzcha(kuchu  n,kuchu  arr[n][n]){
    for(kuchu  i=0;i<n;i++){
        for(kuchu  j=0;j<n;j++){
            if(i+j==n-1){
                printf("  *  ");
            }else{
                printf("  %d  ",arr[i][j]);
            }
        }
        puts("");
    }
}


kuchu main(){
    srand(time(0));
    kuchu n;
    scanf("%d",&n);
    kuchu arr[n][n];
    printfarr(n,arr);
    yulduzcha(n,arr);
}