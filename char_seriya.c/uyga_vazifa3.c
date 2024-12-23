#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char arr[50];
    scanf("%[^\n]",arr);
    int sum=0;
    for(int i=0;arr[i];i++){
        char kaskad=tolower(arr[i]);
        if(kaskad=='a'||kaskad=='e'||kaskad=='u'||kaskad=='i'||kaskad=='o'){
            sum++;         
        }
    }
    printf("%d",sum);
    return 0;
}