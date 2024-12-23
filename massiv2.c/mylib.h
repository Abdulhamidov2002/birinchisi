#include <stdlib.h>
#include <time.h>
void harf(char a){
    a>='a'&&a<='z'?puts("True"):puts("false");
}

int daraja(int a,int b){
    int sum=1;
    for(int i=b;i;i--,sum*=a);
    printf("%d",sum);
}
void maxOFthrenumbers(float a,float b,float c){
    if(a>b&&a>c){
        printf("%f",a);
    }else if(b>c){
        printf("%f",b);
    }else{
        printf("%f",c);
    }
}

void musbat(int a){
    if(a>0){
        puts("Musbat son kiritdingiz");
    }else if(a<0){
        puts("Manfiy son kiritdingiz");
    }else{
        puts("mubat ham emas manfiy ham emas");
    }
}

void kiritilganson(int a){
    a==7 ? printf(" siz kiritgan son %d",a) : 0;
}

int toqjuft(int arr[],int n){
   int a=1;
   for(int i=0;i<n;i++){
       if(i%2!=0){
         arr[i]=a;
         a++;
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]=a;
            a++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);   
    }
}

int jufttoq(int arr[],int n){
    int a=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]=a;
            a++;
        }
    }
    for(int i=0;i<n;i++){
       if(i%2!=0){
         arr[i]=a;
         a++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);   
    }
}

void printarr(int arr[],int n){
puts("");
for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
}
}

void printtasodifiy(int arr[],int n ){
    for(int i=0;i<n;i++){
        arr[i]=rand()%n+1;
        printf("%d ",arr[i]);
    }
}

void qatnashuvchilarsoni(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum=1;
        for(int s=0;s<i;s++){
            if(arr[s]==arr[i]&&s!=i){
                goto start;
            }   
        }
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                sum++;
            }
        }
        printf("\n\n%d -> %d ta qatnashgan",arr[i],sum);
        start:
    }
}

void printfarr(int arr[],int n){
    puts("");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}