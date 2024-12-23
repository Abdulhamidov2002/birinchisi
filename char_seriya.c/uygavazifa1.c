#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char arr[50];
    scanf("%[^\n]",arr);
    for(int i=0;arr[i];i++){
        if(isalpha(arr[i])){
            printf("%c",arr[i]);
        }
    }
    return 0;
}