#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));

int n;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
    arr[i]=rand()%(n)+1;
    printf("%d ",arr[i]);
}

// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-1;j++){
//         if(arr[j]>arr[j+1]){
//             int c=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=c;
//         }
//     }
// // }
// puts("");
// for(int i=0;i<n;i++){
//     printf("%d  ",arr[i]);
// }


// for(int i=0;i<n;i++){
//    for(int j=0;j<n-1;j++){
//        if(arr[i]==arr[j]&&j!=i){
//        int a=arr[j]=rand()%(n)+1;
//         printf("\n%d",arr[j]);
//        }
//        if()
//        goto start;
//        }
//     }
// }
// puts("");
// for(int i=0;i<n;i++){
//     printf("%d  ",arr[i]);
// }

// for(int i=0;i<n;i++){
//     if(arr[i]!=i+1){
//         arr[i]=i+1;
//     }
// }
// puts("");
// for(int i=0;i<n;i++){
//     printf("%d  ",arr[i]);
// }
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(arr[j]==arr[i]&&i!=j){
            start:
            arr[i]=rand()%n+1;
            for(int a=0;a<n;a++){
                if(arr[i]==arr[a]&&a!=i){
                    goto start;
                }
            }
        }
    }
}
puts("");
for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
}
}








