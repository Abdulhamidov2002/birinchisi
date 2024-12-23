#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// void toqlarsum(int n, int arr[][n]){
//     int sum=0;
//     for (int i=0;i<n*n;i++){
//         scanf("%d",&arr[0][i]);
//         if (arr[0][i]%2){
//             sum+=arr[0][i];
//         }
//     }
//     printf("%d",sum);
// }
// int main(){

//     int a;
//     scanf("%d",&a);
//     int arr[a][a];
//     toqlarsum(a,arr);
// }       

// void teskari(int n ,int arr[][n]){
//     int b=n,a=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i%2==0){
//                 arr[i][j]=a;
//                 a++;
//             }
//             if(i%2){
//                 b--;
//                 arr[i][b]=a;
//                 a++;
//             }
//         }
//     }
//     for(int i=0 ; i<n*n;i++){
//         printf("%d",arr[0][i]);
//     }
// }
// int main(){

//     int n;
//     scanf("%d",&n);
//     int arr[n][n];
//     teskari(n,arr);
// }





// void bolinma(int n,int m,int arr[n][m]){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             arr[i][j]=rand()%100;
//             printf("%2d    ",arr[i][j]);
//         }
//     puts(" ");
//     }   

//     printf("--------------------------------------------\n\n\n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]%4==0 && arr[i][j]%8!=0){
//                 arr[i][j]=0;
//                 printf("%d    ",arr[i][j]);
//             }else{

//                 printf("%d     ",arr[i][j]);
//             }
//         }
//     puts(" ");
//     }   
// }

// int main(){
//     srand(time(0));
//     int n,m;
//     scanf("%d%d",&n,&m);
//     int arr[n][m];
//     bolinma(n,m,arr);
// }

void bublesort(int n,int arr[][n]){
 int xato=1;
 while (xato){
    xato=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){

            if(arr[i][j]<arr[i][j+1]){
                int c=arr[i][j+1];
                arr[i][j+1]=arr[i][j];
                arr[i][j]=c;
                xato=1;
            }   
        }
    }
 }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%2d ",arr[i][j]);
        }
        puts("");
    }
}

int main(){

    int arr[3][3]={{3,5,2},{5,8,2},{45,6,8}};
    bublesort(3,arr);
     
    
}