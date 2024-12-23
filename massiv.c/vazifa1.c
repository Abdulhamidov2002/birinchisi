#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int a;
    puts("to'plamda nechta son qatnashishini kiriting:");
    scanf("%d",&a);
    int arr[a];

    for(int i=0;i<a;i++){
        arr[i]=rand()&100+1;
        printf("  %d",arr[i]);
    }
    int max=arr[0],min=arr[0],maxindex=0,minidex=0;
    
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            maxindex=i;
            max=arr[i];
        }
           if(arr[i]<min){
            minidex=i;
            min=arr[i];
        }
    }
    printf("\n\n\n\n\nmax=%d va min=%d",maxindex,minidex);
}