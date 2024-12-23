#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    // char arr[50];
    // scanf("%s",arr);

    // for(int i=0;arr[i];i++){
    //     if(isupper(arr[i])){
    //         arr[i]+=32;
    //     }else if(islower(arr[i])){
    //         arr[i]+=1;
    //     }
    // }
    // printf("%s",arr);

    char arr[50];
    scanf("%[^\n]",arr);
    char arr1[50];
    scanf( " %s",arr1);

    char *ptr=strtok(arr," ");
    char answer[50];
    strcpy(answer,ptr);
    for(int i=0;ptr;i++){
        // if(strcmp(arr1,ptr)==0){
        //     i+=1;
        //    printf("%d",i);
        // }
      
        ptr=strtok(NULL," ");  
        if(strlen(ptr)>strlen(answer)){
            strcpy(answer,ptr);
        }
    }
    printf("%s",answer);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *ptr1 = fopen("salom.txt", "r");
    FILE *ptr2 = fopen("katta.txt", "w");
    FILE *ptr3 = fopen("kichik.txt", "w");

    // fgetc();  file get char

    // char natija = fgetc(ptr1);
    // printf("%c", natija);

    char natija;
    while((natija = fgetc(ptr1)) != -1){ // EOF
        // printf("%c\n", natija);
        if(isupper(natija)){
            fprintf(ptr2, "%c ", natija);
        }else if(islower(natija)){
            fprintf(ptr3, "%c ", natija);
        }
    }

    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);

}
