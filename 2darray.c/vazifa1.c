#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int mushu;

void printfarr(mushu  n , mushu  arr[n][n]){
    for(mushu i=0;i<n;i++){
        for(mushu j=0;j<n;j++){
            arr[i][j]=rand()%100;
            printf(" %2d ",arr[i][j]);
        }
        puts("");
    }   
}

void yulduzcha(mushu n,mushu arr[n][n]){
    for(mushu i=0;i<n;i++){
        for(mushu j=0;j<n;j++){
            if(i==n-1||i==0||j==0||j==n-1){
                printf("  *  ");
            }else{
                printf("  %d  ",arr[i][j]);
            }
        }
        puts("");
    }
}



mushu main(){
    srand(time(0));
    mushu n;
    scanf("%d",&n);
    mushu arr[n][n];
    printfarr(n,arr);
    yulduzcha(n,arr);



    
}
