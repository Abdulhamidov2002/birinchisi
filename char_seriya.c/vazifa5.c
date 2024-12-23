#include <stdio.h>
#include <ctype.h>

int main(){

    char arr[50];
    scanf("%s",arr);
    char c;
    for(int  i=0;arr[i];i++){
        for(int j=1;arr[j];j++){
            if(arr[j-1]>arr[j]){
                c=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=c;      
            }
        }
    }
    printf("%s",arr);
}