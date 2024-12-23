#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char arr[50];
    scanf("%[^\n]",arr);
    int b=0;

    for(int i=0;arr[i];i++){
        if(isdigit(arr[i])==0){
            b++;
        }
    }
    if(b==0){
        puts("true");
    }else{
        puts("false");
    }
}