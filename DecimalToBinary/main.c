#include <stdio.h>
#include <string.h>

void dToB(int n) {

    char st[1000];
    static int c=0;
    int rem,i=0;
    while(n>0)
    {
        rem=n%2;
        st[i]=rem +'0';
        //printf("%d",rem);
        c++;
        n=n/2;
    }

    while (st[c]!='\0')
    {
        printf("%c",st[c]);
        c--;
    }

}

int main() {
    int n;
    scanf("%d",&n);
    dToB(n);
    return 0;
}
