#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void remoe(int arr[],int n,int qiymat){
    n++;
    arr=realloc(arr,n*sizeof(int));
    arr[n-1]=qiymat;
    printf("arr[%d]=",n);
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}

int main(){
    printf("arr neechta sondan iborat bo'sin :");
    int n,qiymat;
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("\n%d chi  qiymatni bering:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("arrayga nechi qimatini qo'shamiz? :");
    scanf("%d",&qiymat);
    remoe(arr,n,qiymat);
}