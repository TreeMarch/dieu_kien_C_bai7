#include <stdio.h>

//int phanLoaiHocSinh(){
    int main (){
        int student_grade;
//        char student_code;
        printf("\n Enter your student grade here pls : ");
        scanf("\n %d",&student_grade);
//        printf("\n Enter your student code here pls : ");
//        scanf("\n %c",&student_code);

        if (student_grade >= 75){
            printf("\n Your code student is A");
        }
        else if (student_grade >= 60 && student_grade <= 74)
            printf("\nYour student code is B ");
        else if (student_grade >= 45 && student_grade <= 60)
            printf("\nYour student code is C ");
        else if (student_grade > 35 && student_grade <= 45)
            printf("\nYour student code is D ");
        else (student_grade <= 35);
            printf("\nYour student code is E");

    }
//}