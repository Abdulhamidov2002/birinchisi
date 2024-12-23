#include <stdio.h>

void toqjuft(int *son1 , int *son2){
    if(*son1 % 2==0){
        printf("a--->juft\n");
    }else{
        printf("a---> toq\n");
    }
    if(*son2%2==0){
        printf("b--.>juft\n");
    }else{
        printf("b ---> toq\n");
    }
}

void kattassi(int *son , int *son1){
    if(*son>*son1){
        *son1=*son;
    }else{
        *son=*son1;
    }
}

void xona(int son,int *xona){
    for(int i=son;son;son/=10){
        *xona+=1;
    }
}

void nechtasi(int son,int *j,int *t){
    for(int i=son;son;son/=10){
        (son%10)%2==0 ;
    }
}

void maxx(int arr[],int n,int *max){
    for(int i=0;i<n;i++){
        if(*max<arr[i]){
            *max=arr[i];
        }
    }
}

void son(float *prt){
    *prt=(int)(*prt);
}

void yegindi(int arr[],int n,int *sum){
    for(int i=0;i<n;i++){
        *sum+=arr[i];
    }
}


void maxmin(int arr[],int n,int *max,int *min){
    int maxi=0,minx=0;
    for(int i=0;i<n;i++){
        if(*max<arr[i]){
            *max=arr[i];
            maxi=i;
        }
    
        if(*min>arr[i]){
            *min=arr[i];
            minx=i;
        }
    }
    int a=arr[minx];
    arr[minx]=arr[maxi];
    arr[maxi]=a;

}

int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     toqjuft(&a,&b);

// int a,b;
// scanf("%d%d",&a,&b);
// kattassi(&a,&b);
// printf("%d=a , %d=b",a,b);

// int a,xon=0;
// scanf("%d",&a);
// xona(a,&xon);
// printf("%d",xon);


// int a,juft=0,toq=0;
// scanf("%d",&a);
// nechtasi(a,&juft,&toq);
// printf("%d=juftlar  %d=toq;ar",juft,toq);


// int arr[]={2,4,7,10,7},max=arr[0];
// maxx(arr,5,&max);
// printf("%d",max);

// float  a=12.3;
// son(&a);
// printf("%f",a);

// int arr[]={3, 6, 7, 3, 8},sum=0;
// yegindi(arr,5,&sum);
// printf("%d",sum);


// int arr[]={3,5,8,45,23,76,4},max=arr[0],min=arr[0];
// maxmin(arr,7,&max,&min);
// for(int i=0;i<7;i++){
//     printf("  %d   ",arr[i]);
// }









}

