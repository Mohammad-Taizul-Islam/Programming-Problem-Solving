#include <stdio.h>


//Iterative factorial by C


void _iterative_factorial(int n) {

    int i;
    long product=1;
    for(i=n;i>0;i--)
    {
        product*=i;
    }
    printf("%d! :factorial in iterative method is : %ld",n,product);
}


//Recursive factorial by C

long  _recursion_factorial(int n) {
  if(n == 0)
      return 1;
  else
      return n*_recursion_factorial(n-1);
}





int main() {

    int n;
    scanf("%d",&n);
    //_iterative_factorial(n);
    long fact;
    fact = _recursion_factorial(n);
    printf("%d! :factorial in recursive  method is : %ld",n,fact);
    return 0;
}
