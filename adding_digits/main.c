#include <stdio.h>

int adding_digits_modular(int n) {
    int remindar,sum=0;
    while (n!=0)
    {
        remindar=n%10;
        n=n/10;
        sum+=remindar;
    }
    return sum;
}

int adding_digits_recursion(int n)
{
    if(n==0)
        return 0;
    return n%10 +adding_digits_recursion(n/10);
}

int adding_digits_without_modular(char m[])
{
    int c=0,sum=0;

    while(m[c]!='\0')
    {
        sum+=m[c]-'0';
        c++;
    }

    return sum;
}
int main() {
    int n;
    int sum;
    char m[1000];
   // scanf("%d",&n);
    scanf("%s",m);
    //sum=adding_digits_modular(n);
   // sum=adding_digits_recursion(n);
    sum=adding_digits_without_modular(m);
    //printf("Number : %d",n);
    printf("Number : %s",m);
    printf("\n");
    printf("Sum of digits : %d ",sum);
    return 0;
}
