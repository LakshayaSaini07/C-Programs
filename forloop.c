#include <stdio.h>

int main(){
    int n , i, ans, final;
    printf("Enter any natural number : ");
    scanf("%d", &n);

    for(i =1 ; i<=10; i++){
        ans = n*i;
        final += ans;
        printf("%d x %d = %d\n",n,i,ans);
    }
    printf("The sum is = %d", final);
    return 0;
}