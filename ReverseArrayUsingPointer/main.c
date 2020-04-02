#include <stdio.h>

void array_reverse_pointer(int *num,int n) {
    int i;
    for (i=n;i>0;i--)
    {
        printf("%d",num[i]);
    }
}

int main() {

    int n,num[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    array_reverse_pointer(&num,n);
    return 0;
}
