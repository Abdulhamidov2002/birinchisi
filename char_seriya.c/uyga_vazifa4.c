#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char arr[50];
    char kaskad[50];
    int sum=0;

    scanf("%[^\n]",arr);
    for(int i=0;arr[i];i++){
        sum++;
    }
    for(int i=0; sum ; i++){
        sum-=1;
        kaskad[i]=arr[sum];
    }
    if(strcmp(arr,kaskad)==0){
        puts("Planidrom");
    }else{
        puts("no palindrom");
    }

    return 0;
}