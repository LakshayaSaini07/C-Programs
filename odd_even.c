# include <stdio.h>
int main (){
    int a ;
    printf("Enter the number here ");
    scanf("%d",&a);
    if (a%2){
        printf("the number is an odd integer");
    }
    else {
        printf("Its an even number ");
    }
    return 0;
}