#include <stdio.h>

int Montek_Company(){
//    int main(){
        char Employee;
        int salary;
    printf("\nEnter your type of employ here : ");
    scanf("%c",&Employee);
    printf("\nEnter your salary : ");
    scanf("%d",&salary);

    switch (Employee) {
        case 'A':
            printf("\nBonus dollar is :  %d\n", 300);
            break;
        case 'B':
            printf("\nBonus dollar is :  %d\n", 250);
            break;
        default:
            printf("\nBonus dollar is : %d\n",100);
            break;
    }

    salary = salary + Employee;
    printf("the overall salary is : %d",salary);

    }
//}