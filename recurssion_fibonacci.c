#include <stdio.h>

int fact(int);

int fact(int n){
    if(n==0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int num , a;
    printf("Enter the number of term: ");
    scanf("%d",&num);
    a =fact(num);
    printf("%d",a);
    return 0;
}