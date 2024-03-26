#include <stdio.h>
#include <math.h>

int main(){
    int   i = 3, j = 5, *p = &i, *q = &j, *r; 
    double   x = 2.50;
    printf("%d\n",*p); // Output: 3
    r = p;
    printf("%d\n",*r); // Output: 3
    r= &j;
    printf("%d\n",*r); // Output: 5
    r = &x;
    printf("%d\n",*r); // Output: Garbage value (since x is a double, not an int)
    printf("%d\n",**&p); // Output: 3
    printf("%d\n",*p-1); // Output: 2
    printf("%d\n",*p+*q); // Output: 8
    printf("%d\n",++*p); // Output: 4
    printf("%d\n",7**q+7); // Output: 42
}