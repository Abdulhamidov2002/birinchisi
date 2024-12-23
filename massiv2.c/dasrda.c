#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // srand((time(NULL)));
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    
    // for(int i=0 ; i<n;i++){
    //     arr[i]=rand()%52-46;
    //     if(arr[i]%2==0){
    //         printf("%d ",arr[i]);
    //     }else{
    //         printf(" ");
    // }
    // }
//-----------------------------------------

    // srand((time(NULL)));
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    
    // for(int i=0 ; i<n;i++){
    //     arr[i]=rand()%39-12;
    //     if(arr[i]>0){
    //         arr[i]=1;
    //         printf("%d ",arr[i]);
    //     }else if(arr[i]<0){
    //         arr[i]=0;
    //         printf("%d",arr[i]);
    //     }else{
    //         arr[i]=0;
    //         printf("%d",arr[i]);
    // }
    // }

//---------------------------------------------

    //  srand((time(NULL)));
    // int n;
    // scanf("%d",&n);
    // int arr[n];
    
    // for(int i=0 ; i<n;i++){
    //     arr[i]=rand()%21-10;
    //     if(arr[i]>0){
    //         arr[i]*=(-1);
    //         printf("%d ",arr[i]);
    //     }else{
    //         printf("%d ",arr[i]);
    //     }

    // }

    //---------------------------------

    // srand((time(NULL)));
    // int n,sum=0,s=0;
    // scanf("%d",&n);
    // int arr[n];
    
    // for(int i=0 ; i<n;i++){
    //     arr[i]=rand()%102+2;
    //     printf("%d   ",arr[i]);
    // }
    // for(int i=0 ; i<n;i++){
    //     sum=0;
    //     for(int j=2;j<arr[i];j++){                // tub sonlarni soni          
    //         if(arr[i]%j==0){
    //           sum+=1;
    //     }
    //     }
    //     if (sum==0){
    //         s+=1;
    //     }
        
    // }
    // printf("\n\n tub sonlar = %d ta ",s);

//------------------------------------------------------------------

// sarnd(time(NULL));

// int n,son;
// scanf("%d",&n);

// int arr[n];

// for(int i=0 ;i<n;i++){
//     arr[i]=rand()%24-15;
//     printf("%d",arr[i]);
// }

// puts(" ");

// sin=arr[n-1];

// for(int i=n-2;i>=0;i--){
//     arr[i+1]=arr[i];
// }

// arr{0}=son;

//---------------------------------





// int arr[]={12,34,5,67,1,23};
// int a=arr[1]+arr[0];
// for(int i=0;i<4;i++){
//     if(a<arr[i+2]+arr[i+1]){
    
//         a=arr[i+3]+arr[i+2];
//     }   
//     }
//     printf("     %d",a);

//---------------------------------------


// int arr[]={125,34,12,45,56,6,78};
// for(int i=1;i<6;i++){
//     if(arr[i+1]<arr[i]&&arr[i]>arr[i-1]){
//         printf("   %d",arr[i]);
//     }
// }

//----------------------------------

// int arr[]={12,45,87,34,98,56};
// int a,b,s;
// scanf("%d",&a);
// b=a-arr[0];
// s=arr[0];
// for(int i=1;i<6;i++){
//     if(arr[i]-a<0){
//         if((arr[i]-a)*(-1)<b){
//            b=a-arr[i];
//            s=arr[i];
//     }
//     }else {
//         if(arr[i]-a<b){
//             b=a-arr[i];
//             s=arr[i];
//         }
//     }
        
// }
// printf("%d",s);


float arr[5]={1.23 , 5.98 , 4.432 , 7.567 , 3.87 };

for(int i=0 ; i<4;i++){
    for(int a=0;a<4;a++){
        if(arr[a]<arr[a+1]){
            float c=arr[a];
            arr[a]=arr[a+1];
            arr[a+1]=c;
        }
    }
}
puts("");
for(int i=0;i<5;i++){
   printf(" %f",arr[i]);
}
}

//-----------------------------------------------------








