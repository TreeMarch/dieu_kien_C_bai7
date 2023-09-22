#include <stdio.h>

//day la mot vi du , o day bieu thuc cua switch la mot bien kieu so nguyen va gia tri cua moi case la mot so nguyen

int bonusDollar(){
//    int main(){
        int basic ;
    printf("\n enter your basic here : ");
    scanf("%d",&basic);

    switch (basic) {
        case 200:
            printf("\nBonus is dollar : %d\n",50);
            break;
        case 300:
            printf("\nBonus is dollar : %d\n",125);
            break;
        case 400:
            printf("\nBonus is dollar : %d\n",140);
            break;
        case 500:
            printf("\nBonus is dollar : %d\n",175);
            break;
        default:
            printf("\n Invalid entry !");
            break;

    }
    }
//}