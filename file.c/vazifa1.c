#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *ptr=fopen("salom.txt","r");
    char katta[50],katta1[50];
    fscanf(ptr,"%s",katta);
    while(fscanf(ptr,"%s",katta1)!=-1){
        if(strlen(katta)<strlen(katta1)){
            strcpy(katta,katta1);
        }

    }
    printf("%s",katta);
    fclose(ptr);
    
}