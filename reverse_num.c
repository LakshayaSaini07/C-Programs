# include <stdio.h>
int main(){
    int n , d1, d2 , d3 , d4, d5;
    int revnum;
    printf("\n Enter the number - ");
    scanf("%d", &n);
    d1 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    d5 = n%10;
    n = n/10;
    revnum = d1*10000 + d2*1000 + d3*100 + d4*10 + d5;
    printf("\nThe number reversed is =%d\n", revnum);
    if (n==revnum){
        printf("\nthe orignal and reversed number are equal");
    }
    else {
        printf("The orginal and reversed number are not equal");
    }
    return 0;
}