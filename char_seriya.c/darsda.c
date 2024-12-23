#include <stdio.h>
typedef char garri;
typedef int  potter; 
#include <ctype.h>
int main(){

    // garri str[50];
    // potter sum=0;
    // scanf("%s",str);
    // for(potter i=0;str[i];i++){
    //     sum++;
    // }
    // printf("%d",sum);
   

// garri str[50];
//    potter sum=0;
//    scanf("%s" , str);

//    for(potter i=0; str[i];i++){
//     for(str[i]>=48&&str[i]<=57){
//         sum++;
//     }
//    }
//    printf("%d",sum);



garri arr[50];
scanf("%s",arr);

potter birinchi,oxirgi;

for(potter i=0;arr[i];i++){
    if(arr[i]>='0'&&arr[i]<='9'){
        birinchi =i;
        break;
    }
}
for(potter i=0;arr[i];i++){
    if(arr[i]>='0'&&arr[i]<='9'){
        oxirgi=i;
    }
}
for(potter i = birinchi+1;i<oxirgi;i++){
    printf("%c",arr[i]);
}









// garri arr[50];
// scanf("%s",arr);
// potter sum=0;

// for(potter i=0;arr[i];i++){
//     // if(isdigit(arr[i])){
//     //     sum+=arr[i]-'0';
//     // }
// //     if(arr[i]>='0'&&arr[i]<='9'){
// //         sum+=arr[i]-48;
// //     }
//     // if(isalpha(arr[i])){
//     //     sum++;
//     // }
//     if(arr[i]>='a' && arr[i]<='z'|| arr[i]>='A'&&arr[i]<='Z'){
//     sum++;
// }
// }
// printf("%d",sum);


garri text[]="bu#lar ha# do## kech qoladi";
garri key[]="lrim";

for(potter i=0,j=0;text[i];i++){
    if(text[i]=='#'){
        text[i]=key[j];
        j++;
    }

}
printf("%s",text);
}
 
