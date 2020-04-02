#include <stdio.h>

void check_vowel_or_consonat(char ch) {
    /*  if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <='Z')
      {
          if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
          {
              printf("%c  : is a vowel",ch);
          } else{
              printf("%c  : is not a vowel",ch);
          }

      } else
          printf("Character is neither vowel nor consonant \n");*/

    switch (ch) {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o':
        case 'u':
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
            printf("%c  : is a vowel", ch);
            break;
        default:
            printf("%c  : is  a consonant", ch);
    }
}

int main() {
    char c;
    scanf("%c",&c);
    check_vowel_or_consonat(c);
    return 0;
}