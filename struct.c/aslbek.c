#include <stdio.h>
#include <string.h>

typedef struct tala {
    char ism[50];
    int yosh;
    float stipendiya;
    int baholar[10]; 
    float ortacha_baho;
}talaba ;

int main() {
    int n = 5;
    talaba talabalar[5] = {
        {"Vali", 20, 500000.0, {5, 4, 3, 5, 4}},
        {"Saida", 21, 550000.0, {4, 5, 5, 4, 5}},
        {"Bekzod", 19, 450000.0, {3, 4, 3, 4, 3}},
        {"Anvar", 22, 600000.0, {5, 5, 5, 4, 5}},
        {"Nodira", 20, 500000.0, {4, 4, 5, 3, 4}}
    };

    for (int i = 0; i < n; i++) {
        float umumiy_baho = 0;
        for (int j = 0; j < 5; j++) {
            umumiy_baho += talabalar[i].baholar[j];
        }
        talabalar[i].ortacha_baho = umumiy_baho / 5.0;
    }


    printf("\nTalabalar ro'yxati:\n");
    for (int i = 0; i < n; i++) {
        printf("Ism: %s\n", talabalar[i].ism);
        printf("Yosh: %d\n", talabalar[i].yosh);
        printf("Stipendiya: %.2f\n", talabalar[i].stipendiya);
        printf("Baholar: ");
        for (int j = 0; j < 5; j++) {
            printf("%d ", talabalar[i].baholar[j]);
        }
        printf("\n");
        printf("O'rtacha baho: %.2f\n", talabalar[i].ortacha_baho);
        printf("--------------------\n");
    }

    return 0;
}