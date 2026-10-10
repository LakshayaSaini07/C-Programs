# include <stdio.h>
int main()
{
    int hun , fif , ten , fiv , two , one , a, total ;
    printf("Enter the amount - ");
    scanf("%d",&a);
    hun = a/100;
    a = a%100;
    fif = a/50;
    a = a%50;
    ten = a/10;
    a = a%10;
    fiv = a/5;
    a = a%5;
    two = a/2;
    a = a%2;
    one = a;
    total = hun + fif + ten + fiv + two + one + a;
    printf("Smallest number of notes required = %d", total);
    return 0;

}