#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n=10;
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); 
    }
    int maxi=0;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    c=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=c;
                }              
                n--;
                arr=realloc(arr,(n)*sizeof(int));
                j--;  
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}