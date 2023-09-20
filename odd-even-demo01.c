#include <stdio.h>

int odd_even(){
//    int main(){
    int num , res;
    printf("Enter your number : ");
    scanf("%d", &num);
    res = num % 2 ;
    if (res == 0){
        printf("this is even number");
    }
    else {
        printf("this is odd number");
    }
    }
//}