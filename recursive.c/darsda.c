// #include <stdio.h>

// // int kopaytma(int a,int b){
    
// //     if(b==0){
// //         return 1;
// //     }
// //        return a*kopaytma(a,b-1);
// // }

// // void juft(int a){
// //     if(a==0){
// //         return ;
// //     }
// //     if(a%2!=0){
// //         printf("%d ",a);
// //     }
// //     juft(a-1);
// // }

// // int raqamsum(int a){
// //     if(a==0){
// //         return 0;
// //     }
// //     return a%10+raqamsum(a/10);
// // }

// // int ekub(int a){
// //     if(a)
// // 

// int tubmi(int n,int i){
    
//     return n<2 ? 0 : n==i ? 1 : n%i==0 ? 0 : tubmi(n,i++);
// }

// void son(int b,int c){

//     if(b==c){
//         return;
//     }

//     if(b%c==0&&tubmi(c,2)==1){
//         printf("%d",c);
//     }

//     return son(b,c+1);
// }

// int  yegindi(int a,int sum){
//     if(a==i){
//         return 0;
//     }
//     sum=

//     return sum+yegindi(a-1,sum);
// }

// int main(){
//     // int a,b;
//     // scanf("%d%d",&a,&b);
//     // printf("%d",kopaytma(a,b));

//     scanf("%d",&n);
//     int a[n],sum=0;
    
//     sum=yegindi(a,sum);
//     printf("%d",sum);

// }


#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <ctype.h>

int kopaytma(int a,int b){
    
    if(b==0){
        return 1;
    }
       return a*kopaytma(a,b-1);
}

void rec(int n,int sum,int had)
{
    if(n == 0)
        return;

    printf("%d |",had);

    sum += had*had;
    had = sum;
    return rec(n-1,sum,had);
}

int  raqamlar(int i,char a[],int sum){
    if(strlen(a)==i) return sum;
    if(isdigit(a[i])==1){
        sum+=1;
    }

    return raqamlar(i++,a,sum);
}

int main(){
    char arr[50]="";
    scanf("%s",arr);
    int sum=raqamlar(0,arr,0);
    printf("%d",sum);
}
