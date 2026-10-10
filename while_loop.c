#include <stdio.h>

int main(){
    int i, n=0 , sum;
    printf("Enter the value of i : ");
    scanf("%d",&i);
    while(n<=i){
        sum += n;
        n++;
    }
    printf("%d", sum);
    return 0;
}