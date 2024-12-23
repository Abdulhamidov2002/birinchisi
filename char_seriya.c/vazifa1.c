#include  <stdio.h>
typedef char garri;
typedef int  potter; 
#include <ctype.h>

int main(){
garri arr[50];
scanf("%[^\n]",arr);

potter birinchi=-1,oxirgi=-1;

for(potter i=0;arr[i];i++){
    if(arr[i]>='0'&&arr[i]<='9'){
        birinchi =i;
        break;
    }
}
for(potter i=0;arr[i];i++){
    if(arr[i]>='a'&&arr[i]<='z'){
        oxirgi=i;
    }
}
for(potter i = birinchi+1;i<oxirgi;i++){
    printf("%c",arr[i]);
}

}