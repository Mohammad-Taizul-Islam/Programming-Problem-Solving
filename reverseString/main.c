#include <stdio.h>
#include <string.h>
void reverse_string(char *str) {

    char *begStr,*endStr,temp;
    int len=strlen(str),i;
    begStr=str;
    endStr=str;
    for(i=0;i<len-1;i++)
    {
        endStr++;
    }

    for(i=0;i<len/2;i++)
    {
        temp=*endStr;
        *endStr=*begStr;
        *begStr=temp;
        begStr++;
        endStr--;
    }

}

int main() {

    char str[1000];
    scanf("%[^\n]s",str);
    reverse_string(str);

    printf("Reverse the String : %s",str);
    return 0;
}
