#include <stdio.h>
int main(){
    int num , digit , total;
    printf("Enter any number:");
    scanf("%d", &num);
    total = 0;
    while(num>0){
        digit= num%10;
        total = total + digit;
        num = num/10;  
    }
    printf("The sum of individual digits of the number is:%d",total);
    return 0;
}