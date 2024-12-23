#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char arr[50];
    scanf("%[^\n]",arr);

    for(int i=0;arr[i];i++){
        char kaskad=tolower(arr[i]);
        if(kaskad=='a'||kaskad=='e'||kaskad=='u'||kaskad=='i'||kaskad=='o'){
            printf("%c%c",kaskad,kaskad);           
        }else if( kaskad=='o'&&arr[i+1]=='`'){
            printf("%c%c%c%c",kaskad,arr[i+1],kaskad,arr[i+1]);
        }
        else{
            printf("%c",kaskad);
        }
    }
    return 0;
}