#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
//     int index;
//     printf("\n\n\n\nnumberm[]={1,2,3,4,5,6,7,8,9,10}");
//     puts("Necahnchi indexni tanlaysiz");
//     scanf("%d",&index);
//     int numberm[]={1,2,3,4,5,6,7,8,9,10};
//     printf("\n\n\nnumberm[%d]=%d",index,numberm[index]);
//     return main();

// int n,sum=0;
// scanf("%d",&n);

// int masiv[n];

// for ( int i=0;i<n;i++){
//     scanf("%d",&masiv[i]);
// }
// for(int i=n-1 ; i>=0 ; i--){
//     printf("  %d",masiv[i]);
// }













// srand(time(NULL));
// int n;
// scanf("%d",&n);
// int arr1[n];
// int arr[n];
// for(int i=0;i<n;i++){
//     arr1[i]=rand();
//     arr[i]=rand();
//     printf(" a =%d",arr1[i]);
//     printf("  b = %d",arr[i]);
//     arr1[i]=arr1[i]+arr[i];
//     arr[i]=arr1[i]-arr[i];
//     arr1[i]=arr1[i]-arr[i];
    
//     printf("  a =%d",arr1[i]);
//     printf("  b = %d",arr[i]);
//     } 




// srand(time(NULL));
// int a;
// scanf("%d",&a);
// int arr[a];
// int max=arr[0];
// for ( int i=0 ; i<a;i++){
//     arr[i]=rand()&101+0;
//     printf("\n\n\n%d",arr[i]);
//     if (i%2==0){
//         if(max<arr[i]){
//         max=arr[i];
//     }
//     }
// }
// printf("\n\n%d",max);






// int arr[]={2,3,5,62,1};
// int max=arr[0];
// for ( int i=0 ; i<5;i++){
//     if (i%2){
//         if(max>arr[i]){
//         max=arr[i];
//     }
//     }
// }
// printf(" \n\nmin ==%d",max);





// int arr[]={2,3,5,62,1};
// int max=arr[1];
// for ( int i=0 ; i<5;i++){
//     if (i%2){
//         if(max>arr[i]){
//         max=arr[i];
//     }
//     }
// }
// printf(" \n\nmin ==%d",max);





// int arr[]={2,3,5,62,1,45,5};
// int son;
// scanf("%d",&son);
// int max;
// for ( int i=0 ; i<7;i++){
//     if (arr[i]==son){
        
//         max=i;
//     }else{
//         printf("not founff")
//     }
// }
// printf(" \n\nindex==%d",max);



int arr[]={2,3,4,6,3,4,67,46,5,3,34,4223,32,431,3,42};
for(int i=1;i<16;i++){
    if(arr[i+1]>arr[i]&&arr[i]<arr[i-1]){
        printf("   %d",arr[i]);
    }
}
}

// int a=0,b=0;

// int arr[]={2,3,4,6,3,4,3,4};
// for(int i=0;i<8;i++){
//     if(arr[i+1]+arr[i]<arr[i]+arr[i-1]){
        
//         if(arr[i+1]+arr[i]>a)
//         {
//             a=arr[i]+arr[i+1];
//         } 
//     }else{
//         if(arr[i]+arr[i-1]>a){
//          a=arr[i]+arr[i-1];}
//          }
       
//     }printf("     %d",a);
// }

