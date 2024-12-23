#include <stdio.h>

int main(){
    int arr1[5],arr2[5];
    printf("   to'plam birga 5 ta qiymat kiriting\n\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("   to'plam 2 ga  5 ta qiymat kiriting: \n\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    float arr3[5];
    for(int i=0;i<5;i++){ 
    arr3[i]=(arr1[i]+arr2[i])/2.0;
    printf("  %.4f",arr3[i]);
    }
}