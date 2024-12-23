#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct talaba{
    char ism[50];
    int yoshi;
    float stipendiya;
    int baho[5];
}talaba;

talaba ortachasi(talaba arr[],int n,int  sum[]){
    for(int i=0;i<n;i++){
        int s=0;
        printf("%d chi talabani ismini kiriting: ",(i+1));
        scanf("%s",arr[i].ism);
        printf("%s  ni yoshini kiriting: ",arr[i].ism);
        scanf("%d",&arr[i].yoshi);
        printf("%s ni stipendiyasini kiriting: ",arr[i].ism);
        scanf("%f",&arr[i].stipendiya);
        for(int j=0;j<5;j++){
            printf("%s ning %d chi fandan olgan baxosini kiriting: ",arr[i].ism,(j+1));
            scanf("%d",&arr[i].baho[j]);
            s+=arr[i].baho[j];
        }
        sum[i]=s/5;
    }
    for(int i=0 ;i<n;i++){
        if(sum[i]==4){
            printf("ismi %s\n",arr[i].ism);
            printf("stipendiyasi %f\n",arr[i].stipendiya);
            printf("yoshi %d\n",arr[i].yoshi);
            printf("baxolari ");
            for(int j=0;j<5;j++){
                printf("%d ",arr[i].baho[j]);
            }
        }
    }
}

int main (){
    int n,sum[5]={};
    printf("Nechta talaba maluotlarini kiritiasiz: ");
    scanf("%d",&n);
    talaba a[n];
    ortachasi(a,n,sum);
    
}