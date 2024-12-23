#include <stdio.h>
int main(){
    char harf;
    scanf("%c",&harf);
    
    if(harf>='a'&& harf<='z'){
        harf-=32;

    }
    switch(harf){
        case('A'):
        case('E'):
        case('U'):
        case('I'):
        case('O'):
         puts("Unli");
         break;
        case('Q'):
        case('W'):
        case('R'):
        case('T'):
        case('Y'):
        case('P'):
        case('S'):
        case('D'):
        case('F'):
        case('G'):
        case('H'):
        case('J'):
        case('K'):
        case('L'):
        case('Z'):
        case('X'):
        case('C'):
        case('V'):
        case('B'):
        case('N'):
        case('M'):
          puts("Undosh harf");
          break;

    }
    
}