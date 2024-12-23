#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void remoe(int arr[],int n,int index){
    int oxiri=arr[index];
    for(int i=index;i<n-1;i++){
        int c=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=c;
    }
    n--;
    arr=realloc(arr,n*sizeof(int));
    printf("arr[%d]=",n);
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}

int main(){
    printf("arr neechta sondan iborat bo'sin :");
    int n,index;
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("\n%d chi  qiymatni bering:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("nechinchi indexdagi sonni arraydan olib tashlay:");
    scanf("%d",&index);
    remoe(arr,n,index);
}