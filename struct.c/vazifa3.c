#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Aeropeort{
    char turi[50];
    char soati[50];
    char shahar[50];
}Aeroport;

void joylash(Aeroport arr[], int uzunlik){
    for(int i=0; i<uzunlik; i++){
        printf("Samalyot turini kiriting: ");
        scanf("%s", arr[i].turi);
        printf("uchish soatini kiriting: ");
        scanf(" %s", arr[i].soati);
        printf("qonish shahriini kiriting: ");
        scanf("%s", arr[i].shahar);
    }
}

void agar(Aeroport arr[], int uzunlik){
    for(int i=0; i<uzunlik; i++){
        char kaskad[20];
        strncpy(kaskad, arr[i].soati, 2);
        int oy = atoi(kaskad);
        int k=strcmp(arr[i].shahar,"Toshkent");
        if(oy>=2 && oy<=3 && k==0){
            printf("\n\nSamalyot turi: %s\n", arr[i].turi);
            printf("Uchish soati: %s\n", arr[i].soati);
            printf("qonish  shahri %s\n\n\n",arr[i].shahar);
        }
    }
}

int main(){
    Aeroport aer[4];
    joylash(aer, 4);
    agar(aer, 4);
}
