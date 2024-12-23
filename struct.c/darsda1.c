#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct worker{
    char ism[50];
    int yil;
    char kasbi[50];
    float staj;
    int maosh;
}worker;

int main(){
    worker arr[5]={
        {"Latfat", 1997,"Santehnik", 4.2, 30000},
        {"zulfiya", 1983,"", 2.5, 45000},
        {"Dilshoda", 1992,"Vrach", 2, 2050},
        {"Asila", 2004,"Dasturchi", 6, 82500},
        {"Alamjomm", 23,"oshpaz", 8, 1570},
    };

    for(int i=0 ; i<5;i++){
        if(2024-arr[i].yil>30&&arr[i].maosh<2000){
            printf("ismi : %s va kabi ; %s",arr[i].ism,arr[i].kasbi);
        }
    }

    for(int i=0;i<5;i++){
        if(arr[i].staj>5 && strcmp(arr[i].kasbi,"Dasturchi")==0){
            printf("%f yil staj va %s kasbi ",arr[i].staj,arr[i].kasbi);
        }
    }


    int max=arr[0].maosh,l=0;
    for(int i=1;i<5;i++ ){
        if(arr[i].maosh>max){
            max=arr[i].maosh;
            l=i;
        }
    }
    printf("%s ismli oshpaz %d oylik oladi bu eng kopi",arr[l].ism,arr[l].maosh);

    for(int i=0;i<5;i++){
        if(arr[i].yil-arr[i].staj==15){
            printf("%s ismli ischi %s ishni 15 yoshida boshlagan",arr[i].ism,arr[i].kasbi);
        }
    }
    is
}
