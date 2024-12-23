#include <stdio.h>
#include <string.h>

// struct osmir

// {
//     char ism[50];
//     int yosh;
// };

// struct student
// {
//     char ism[50];
//     int yosh;
// };
 struct talaba 
 {
    char ism[50];
    int stipendiya;
    int kurs;
 };
 

int main(){

    // struct student a,b,c,d,j;
    // start:
    // printf("\n\nIltimos isimingizni kiriting\n\n ");
    // scanf("%s", a.ism);
    // printf(" \n Iltimos yoshingizni kiritng \n\n");
    // scanf("%d",&a.yosh);

    // printf("\n\nIltimos isimingizni kiriting\n\n ");
    // scanf("%s", b.ism);
    // printf(" \n Iltimos yoshingizni kiritng \n\n");
    // scanf("%d",&b.yosh);

    // printf("\n\nIltimos isimingizni kiriting\n\n ");
    // scanf("%s", c.ism);
    // printf(" \n Iltimos yoshingizni kiritng \n\n");
    // // scanf("%d",&c.yosh);
    // if( strlen(a.ism) > 4 && a.ism[0]=='A'){
    //     printf("sizning ismingiz %s  va uning harflari soni %d ta \n",a.ism,strlen(a.ism));
    // }else{
    //     printf("Ismingizni bosh harifi A emas yoki isminigizning uzunligii 5 data harfdan ko'p emas\n");
    //     goto start;  
    // }

    // int n;
    // scanf("%d",&n);

    // struct talaba arr[n];
    
    // for(int i=0;i<n;i++){
    //     printf("Ismingizni kiritng\n\n");
    //     scanf("%s",arr[i].ism);
    //     printf("Stipendiyangizni kiriting\n\n");
    //     scanf("%d",&arr[i].stipendiya);
    //     printf("kursingizni kiritng\n\n");
    //     scanf("%d",&arr[i].kurs);
    // }
    // int sum=0;
    // for(int i=0 ; i<n;i++){
    //     if(arr[i].kurs==3){
    //         sum+=arr[i].stipendiya;
    //     }
    // }
    // printf("\n\n%d",sum);

     int n;
    scanf("%d",&n);

    struct talaba arr[n];
    int sum=0;
    
    for(int i=0;i<n;i++){
        printf("Ismingizni kiritng\n\n");
        scanf("%s",arr[i].ism);
        printf("Stipendiyangizni kiriting\n\n");
        scanf("%d",&arr[i].stipendiya);
        printf("kursingizni kiritng\n\n");
        scanf("%d",&arr[i].kurs);
        if(arr[i].kurs==3){
            sum+=arr[i].stipendiya;
        }
    }
    printf("\n\n%d",sum);




   int n;
    scanf("%d",&n);

    struct talaba arr[n];
    int sum=0;
    
    for(int i=0;i<n;i++){
        printf("Ismingizni kiritng\n\n");
        scanf("%s",arr[i].ism);
        printf("Stipendiyangizni kiriting\n\n");
        scanf("%d",&arr[i].stipendiya);
        printf("kursingizni kiritng\n\n");
        scanf("%d",&arr[i].kurs);
    }
    for(int i=0;i<n;i++){
        if(strlen(arr[i].ism)<5&&arr[i].stipendiya==100){
            printf("%s",arr[i].)
        }