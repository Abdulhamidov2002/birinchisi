#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Aeropeort{
    char turi[50];
    char sanasi[50];
}Aeroport;

void joylash(Aeroport arr[], int uzunlik){
    for(int i=0; i<uzunlik; i++){
        printf("Samalyot turini kiriting: ");
        scanf("%s", arr[i].turi);
        printf("Sanasini kiriting: ");
        scanf(" %s", arr[i].sanasi);
    }
}

void agar(Aeroport arr[], int uzunlik){
    for(int i=0; i<uzunlik; i++){
        char kaskad[20];
        strncpy(kaskad, arr[i].sanasi+3, 2);
        int oy = atoi(kaskad);
        if(oy>=6 && oy<=8){
            printf("Samalyot turi: %s\n", arr[i].turi);
            printf("Uchish sanasi: %s\n\n\n", arr[i].sanasi);
        }
    }
}

int main(){
    Aeroport aer[4];
    joylash(aer, 4);
    agar(aer, 4);
}
