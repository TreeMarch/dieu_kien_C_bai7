#include <stdio.h>

int sw_first_esp(){
//    int main(){
        char character;
    printf("\nEnter a lower cased alphabet from a to z : ");
    scanf("%c",&character);

    if (character < 'a' || character > 'z')
        printf("\n Character not a lower cased alphabet");
    else
        switch (character) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\nChaacter is a vowel");
                break;
            case 'z':
                printf("\nLast Alphabet (z) was emtered");
                break;
            default:
                printf("\nCharacter is a consonant");
                break;

        }
    }
//}
