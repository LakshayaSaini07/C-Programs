#include <stdio.h>
int main(){
    int n , i ;
    printf("Enter any number :");
    scanf("%d", &n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            printf("The given number is not prime");
            break;
        }
    }
    return 0;
}