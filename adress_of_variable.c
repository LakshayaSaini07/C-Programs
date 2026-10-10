#include <stdio.h>

int main(){
    int i = 76;
    int*j = &i;
    int k = 69;

    printf("The adress of i is : %p",&i);
    printf("The adress of j is : %p", j);
    printf("The adress of k in numeric form is : %u", &k);

    return 0;
}