#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int sabzi;


void printfarr( sabzi  n , sabzi   arr[n][n]){
    for(sabzi i=0;i<n;i++){
        for(sabzi  j=0;j<n;j++){
            arr[i][j]=rand()%10;
            printf(" %2d ",arr[i][j]);
        }
        puts("");
    }   
}

void almashtir(sabzi n,sabzi arr[n][n]){
    sabzi mini=0,minj=0;
    sabzi maxi=0,maxj=0;

    for(sabzi i=0;i<n;i++){
        for(sabzi j=0;j<3;j++){
            if(arr[i][j] < arr[mini][minj]){
                mini = i;
                minj = j;
            }
            if(arr[i][j] > arr[maxi][maxj]){
                maxi = i;
                maxj = j;
            }
        }
    }
    puts("");
    sabzi c = arr[mini][minj];
    arr[mini][minj] = arr[maxi][maxj];
    arr[maxi][maxj] = c;

    for(sabzi i=0;i<n;i++){
        for(sabzi j=0;j<n;j++) {
            printf(" %2d ",arr[i][j]);
        }
        puts(" ");
    }
}


sabzi main (){

    sabzi n;
    scanf("%d",&n);

    sabzi arr[n][n];
    printfarr(n,arr);
    almashtir(n,arr);

    
}