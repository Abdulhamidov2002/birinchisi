#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
// srand(time( NULL));
// int a=rand()%100+1,sum=0,d;
// for(int i=1 ; i<a;i++){
//     if(a%i==0){
//         sum+=i;
//     }
// }
// if(a==sum){
//     printf("%d mukammal soon",a);
// }else{
//     printf(" %d Mukammal emas",a);
// }





// int a;
// scanf("%d",&a);
// for(int i=1 , c=1;i<=a;i++){
//     for(int i2=1,c=1;i2<=i;i2++,c++){
//         printf("%d ",c);
//     } 
//     puts("");
// }



// int a,el='A';
// scanf("%d",&a);
// for(int i=a;i>=1;i--){
//     for(int i2=1,c=el;i2<=i;i2++,c++){
//         printf("%c ",c);
//     } 
//     puts("");
// }

// int a,n=5;

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(i==j||i+j==n-1){
//             printf("* ");
//         }else{
//             printf(" ");
//         }
//     }puts("");
// }





int a,n=5;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j<=n/2){
            printf("* ");
        }else
            printf(" ");
    }puts("");
}














}