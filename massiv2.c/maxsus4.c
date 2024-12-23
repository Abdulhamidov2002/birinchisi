#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylib.h"

int main (){
    srand(time(0));
    int n;
    scanf("%d",&n);
    int arr[n];

    int toq=0,juft=0;
    printtasodifiy(arr,n);

    for(int i=0;i<n;i++){
        arr[i]%2==0 ? juft++ : toq++;
        }
 
    int arrtoq[toq],arrjuft[juft];

    for(int i=0,s=0,q=0;i<n;i++){
        if(arr[i]%2==0){
            arrjuft[q]=arr[i];
            q++;
        }else{
            arrtoq[s]=arr[i];
            s++;
        }
    }
    printfarr(arrjuft,juft);
    printfarr(arrtoq,toq);
}   