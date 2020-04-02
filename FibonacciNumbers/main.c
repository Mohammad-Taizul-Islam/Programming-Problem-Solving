#include <stdio.h>

int iterative_fibonacci_number(int n) {
    if(n<=1)
        return  n;
    int f1=0;
    int f2=1;
    int f=0,i;
    for(i=2;i<=n;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;
}

int recursive_fibonacci_number(int n) {
    if(n<=1) return n;
    return recursive_fibonacci_number(n-1)+recursive_fibonacci_number(n-2);
}

int main() {
    int n,fab;
    scanf("%d",&n);
   // fab=iterative_fibonacci_number(n);
   fab=recursive_fibonacci_number(n);
    printf("%d : Fibonacci numbers is : %d",n,fab);
    return 0;
}
