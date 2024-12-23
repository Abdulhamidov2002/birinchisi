#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int behi;

void printfarr(behi n ,behi arr[n][n]){
    for(behi i=0;i<n;i++){
        for( behi j=0;j<n;j++){
            arr[i][j]=rand()%100;
            printf(" %2d ",arr[i][j]);
        }
        puts("");
    }   
}
void yulduzcha(behi  n,behi  arr[n][n]){
    behi dioganal=0,teskari=0;
    for(behi  i=0;i<n;i++){
        for(behi  j=0;j<n;j++){
            if(i+j==n-1){
                teskari+=arr[i][j];
            }
            if(i==j){
                dioganal+=arr[i][j];
            }
        }
    }
    printf("%d=diganalsum va teskaridioganalsum=%d",dioganal,teskari);
}

behi main(){
    srand(time(0));
    behi n;
    scanf("%d",&n);
    behi arr[n][n];
    printfarr(n,arr);
    yulduzcha(n,arr);
}