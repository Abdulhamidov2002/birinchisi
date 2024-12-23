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
