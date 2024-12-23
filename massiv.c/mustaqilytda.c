#include <stdio.h>

int main(){
//     int arr[10];
//     printf("10 ta narh kiriting(+- 15 000):   ");
//     for (int i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf(" Narxlar= ");
//     for (int i=0;i<10;i++){
//         printf("\n\n\n\n %d ",arr[i]);
//     }
//     printf("15 000 dan katta narxlar = ");
//     int sum=0;
    // for(int i=0;i<10;i++){
    //     if(15000<arr[i]){
    //         printf(" %d",arr[i]);
    //     }else{
    //         sum+=1;
    //     }   
    // } 
    // if(sum==10){
    //         printf("15 000 dan qimmat narxlar yo'q.");
    //     }

//--------------------------------------------------------------------------

    // int arr[10],a=0;
    // printf("\n\n\n10 ta narh kiriting():   ");
    // for (int i=0;i<10;i++){
    //     scanf("%d",&arr[i]);
    // }
    // printf(" \n\nNarxlar= ");
    // for (int i=0;i<10;i++){
    //     printf(" %d ",arr[i]);
    // }
    // printf("\n\n\n\n biron narx kiriting va dasttur sizga kiritgan narxingizdan yuqori bo'lgan narxlarni chiqarib beradi:");
    // scanf("%d",&a);
    // printf("\n\n\n%d dan katta narxlar,",a);
    // int sum=0;
    // for(int i=0;i<10;i++){
    //     if(a<arr[i]){
    //         printf(" %d",arr[i]);
    //     }else{
    //         sum+=1;
    //     }
    //     }
    //     if(sum==10){
    //         printf("\n\n\n%d dan qimmat narxlar yo'q.",a);
    //     }

    //------------------------------------------------------------------------------------------------
    int n;
    printf("\n\n\nHodimlar sonini kiriting: ");
    scanf("%d",&n);
    int hodimlar[n];
    printf("\n\n%d ta hodimni kunlik bajargan ishlarini yozing(50 dan kop bolsa 100$ qo'shiladii):",n);

    for(int i=0;i<n;i++){
        scanf("%d",&hodimlar[i]);
    }
    printf("\n\n\nhodimlar[10]= ");
    for(int i=0;i<n;i++){
        printf("  %d",hodimlar[i]);
    }

    int maosh[n];
    for(int i=0;i<n;i++){
        if(hodimlar[i]>50){
            maosh[i]=hodimlar[i]*2+100;
        }
        else{
            maosh[i]=hodimlar[i]*2;
        }
    }

    printf("\n\n\nmaosh[10]= ");
    for(int i=0;i<n;i++){
        printf(" %d",maosh[i]);
        puts("");
    }

}