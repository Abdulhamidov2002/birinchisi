#include <stdio.h>

int main(){
    
    char arr[50];
    scanf("%[^\n]",arr);
    int index,soni;
    printf("\nBoshlanish indeksini kiriting :");
    scanf("%d",&index);
    printf("\nNechta belgi chiqishini kiriting : ");
    scanf("%d",&soni);
    puts(" ");
    for(int i=index;i<soni+index;i++){
        printf("%c",arr[i]);
    }

}