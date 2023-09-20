#include <stdio.h>

int invalid_choice(){
//    int main(){
        int x ;
        x = 0;

        printf("enter choice from 1 to 3 :");
        scanf("%d", &x);
        if(x == 1){
            printf("\nyour choice is number %d",x);
        } else if (x == 2){
            printf("\nyour choice is number %d",x);
        } else if (x == 3){
            printf("\nyour choice is number %d",x);
        } else{
            printf("\n Invalid choice ");
        }
    }
//}