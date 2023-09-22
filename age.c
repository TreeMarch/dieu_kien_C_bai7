#include <stdio.h>
int age_example() {
//    int main() {
        int age;
        printf("nhap do tuoi cua ban : ");
        scanf("%d", &age);
        char name;
        printf("ten cua ban : ");
        scanf("%c", &name);

        if (age < 20) {
            printf("%c la thieu nhi", name);
        } else if (age > 20 && age < 30) {
            printf("%c la thanh nien ", name);
        } else {
            printf("%c la nguoi lon tuoi  ", name);
        }
//    }
}