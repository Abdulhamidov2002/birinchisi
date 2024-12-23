#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylib.h"

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    printtasodifiy(arr,n);

    int x=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                goto start;
            }
        }
        x++;
        start:
    }
    printf("\n\n%d",x);


    int arr2[x];

    for(int i=0,m=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                goto lol;
            }
        }
        arr2[m]=arr[i];
        m++;
        lol:
    }
    printf("\n\n\narr2[%d] : ",x);
    printfarr(arr2,x);

    
                






}