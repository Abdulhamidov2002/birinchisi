#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;
    scanf("%d",&n);

    // int *ptr=malloc(n*4),*ptr1=malloc(8);
    // int summ=0,sumj=0,sumt=0;
    // ptr1[0]=0;
    // ptr1[1]=0;
    // for(int i=0;i<n;i++){

    //     scanf("%d",&ptr[i]);
    //     if(ptr[i]%2==0){
    //         ptr1[0]+=ptr[i];
    //     }else{
    //         ptr1[1]+=ptr[i];
    //     }
    //     summ+=ptr[i];
    // }
   
    // printf("%d",ptr1[0]);
   


    // int *ptr=calloc(n,4);

    // for(int i=0;i<n;i++){
    //     scanf("%d",&ptr[i]);
    // }
    // int max=ptr[0],maxi=-1;
    // for(int i=0;i<n;i++){
    //     if(ptr[i]>max){
    //         max=ptr[i];
    //         maxi=i;
    //     }
    // }
    // for(int i=maxi;i<n-1;i++){
    //     int c=ptr[i];
    //     ptr[i]=ptr[i+1];
    //     ptr[i+1]=c; 
    // }

    // ptr=realloc(ptr,(n-1)*4);
    // n--;
    // for(int i=0;i<n;i++){
    //     printf("%d",ptr[i]);
    // }


    int *ptr=calloc(n,4);
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int max=ptr[0],maxi=-1;
    for(int i=0;i<n;i++){
        if(ptr[i]<max){
            max=ptr[i];
            maxi=i;
        }
    }
    for(int i=maxi;i<n-1;i++){
        int c=ptr[i];
        ptr[i]=ptr[i+1];
        ptr[i+1]=c; 
    }
    ptr=realloc(ptr,(n-1)*4);
    n--;
    for(int i=0;i<n;i++){
        printf("%d",ptr[i]);
    }
}