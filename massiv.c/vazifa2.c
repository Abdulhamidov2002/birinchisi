#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    printf("\n\narr=[1,2,3,4,5,6,7,8]\n\n");
    for(int i=3;i>=0;i--){
        printf(" %d,",arr[i]);
    }
    for(int i=4;i<7;i++){
        printf(" %d,",arr[i]);
    }
    printf("%d",arr[7]);
}