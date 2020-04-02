#include <stdio.h>
#include <string.h>

void swap_string(char **str1, char **str2) {

    char *temp=*str1;
    *str1=*str2;
    *str2=temp;

}

int main() {
   char *str1,*str2;
   str1="I love myself";
   str2="I want to live";
   swap_string(&str1,&str2);

   printf("%s",str1);
   printf("\n");
   printf("%s",str2);
    return 0;
}
