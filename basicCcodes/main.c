#include <stdio.h>

void check_odd_even(int n)
{
   //n%2==0 ? printf("Even\n") :printf("Odd\n");
   // (( n & 1) == 1 ) ? printf("Odd \n"): printf("Even \n");
    (((n/2)*2)== n) ? printf("Even \n") :printf("Odd\n");
}

int main() {
    int n;
    scanf("%d",&n);
    check_odd_even(n);
    return 0;
}


