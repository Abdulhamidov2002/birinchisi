#include <stdio.h>

int main(){
    int arr[10],sumt=0,sumj=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            sumj+=arr[i];
        }
        if(i%2){
            sumt+=arr[i];
        }
    }
    printf("sumt-sumj=%d",sumt-sumj);

}