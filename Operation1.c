#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;
    int c = ++a*3 + ++a/3 + ++a*5 - b++ * 2 + ++b/3;
     printf("%d\n%d\n", a,c);
     printf("%d\n",b);
    int d = ++c + ++c/3 + c--*5 + a++*10 + ++b/2 - b--*5;
    printf("%d\n%d\n", c,d);
    return 0; 
}