#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *ptr=fopen("plus.txt","w");
    int a,b,n;
    // scanf("%d%d",&a,&b);
    // fprintf(ptr,"%d+%d=%d",a,b,a+b);
    // fprintf(ptr,"\n%d-%d=%d",a,b,a-b);
    // fprintf(ptr,"\n%d/%d=%d",a,b,a/b);
    // fprintf(ptr,"\n%d*%d=%d",a,b,a*b);
    // fclose(ptr);


    printf("Nechta raqam kiritasiz");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        fprintf(ptr,"%d ",a);
    }    
    fclose(ptr);
    ptr=fopen("plus.txt","r");
    FILE *ptr1=fopen("qoshuv.txt","w");
    for(int i=0;i<n;i++){
        b+=fscanf(ptr,"%d",&a);
        printf("%d",b);
    }
    fprintf(ptr1,"%d",b);
    
    fclose(ptr);
    fclose(ptr1);
}