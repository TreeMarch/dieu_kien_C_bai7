#include <stdio.h>

//===================Doi mot ky tu HOA thanh ky tu thuong=======================
int upper_to_lower(){

//    int main(){
        char c ;
        printf("enter your character : ");
        scanf("%c",&c);

        if (c >='A' && c <= 'Z'){
            printf("lowercase character = %c",c +'a' - 'A');
        } else{
            printf("character Entered = %c",c);
        }
    }
//}