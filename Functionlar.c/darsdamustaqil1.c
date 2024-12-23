#include <stdio.h>


// int qaytar(void){
//     return 4*53;
// }
// int main(){
// int a=qaytar();
// printf("%d",a);
// }





// float salom(void){
//     int a=43;
//     float b=5.6;
//     printf("%g\n",a+b);
//     return a+b;
// }
// int main(){
// float a=salom();
// printf("%g",a);

// }



// float salom(int a, int b){
//     return a/b;
// }

// int main(){

// int a,b;
// scanf("%d%d",&a,&b);
// float natija=salom(a,b);
// printf("%g",natija);
// }



// int ssalom(int a){
//    a<0?a*=(-1):a;
//  return a;
// }
// int main (){
//     int a;
//     scanf("%d",&a);
//     int natija=ssalom(a);
//     printf("%d",natija);
// }

//-------------------------------------------------

// float salom(float a,float b){
//     return a/b;
// }
// int main(){
// int a,b;
// scanf("%d%d",&a,&b);
// float natija = salom(a,b);
// printf("%f",natija);

// }


//------------------------------------

// int salom(int a){
//     int count=0;
//     for(int i=1;i<=a;i++){
//         count=count+i;
//     }
//     return count;
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     int natija=salom(a);
//     printf("%d",natija);
// }
//=---------------------------------

// int salom(int a){
//     int count=1;
//     for(int i=1;i<=a;i++){
//         count=count*i;
//     }
//     return count;
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     int natija=salom(a);
//     printf("%d",natija);
// }
//------------------------------------

// int salom(int a, int b, int c){
//     if(a+b==c){
//         return 1;
//     }else {
//         return 0;
//     }
// }

// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     printf("%d",salom(a,b,c));
// }
//------------------------------------------

// int soat(int a){
//     int s,m,c;
//     s=a/3600;
//     m=(a%3600)/60;
//     c=(a%3600)%60;
//     printf("%d:%d:%d",s,m,c);
// }
// int main (){
//     int a;
//     scanf("%d",&a);
//     soat(a);
// }

//=------------------------------

// int son(int son){
//     int count=0;
//     for(int i=1;i<son;i++){
//         if(son%i==0){
//             count+=i;
//         }
//     }
//     if(count==son){
//         puts("Mukamal son");
//     }else{
//         puts("Mukammal son emas");
//     }
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     son(a);
// }
//===========================

// int salom(int a , int b){
//     int count=1;
//     for(int i=a ; i;  count*=10, i/=10){
//        }
//        b=b*count;
//        printf("%d",a+b);
// }
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     salom(a,b);
// }

///----------------------------------------
//  float salom(int a,int b){
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("a=%d,b=%d",a,b);
//  }
//  int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     salom(a,b);
//  }

int salom (int a , int b){
    for(int i=2;a;i*=b){
        a/i
    }
}