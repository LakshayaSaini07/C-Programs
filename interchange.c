#include <stdio.h>
#include <math.h>
int main(){
    int a,b ,t;
    printf("Enter the first number - ");
    scanf("%d", &a);
    printf("Enter the 2nd number - ");
    scanf("%d", &b);
    t = a;
    a = b;
    b = t;
    printf("interchanged 1st number is  - %d\n", a);
    printf("interchanged 2nd number is - %d", b);
}