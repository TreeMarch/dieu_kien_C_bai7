#include <stdio.h>

//int nam_nhuan(){
    int main(){
        int year;
    printf("\n please enter a year :  ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 2 != 0 || year % 400 == 0 );
    printf("\n %d is a leap year ",year);
    }
//}