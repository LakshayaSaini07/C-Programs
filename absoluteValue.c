# include <stdio.h>
int main(){
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    if(a<0){
        a = a*-1;
    }
    printf("\nthe absolute value is %d",a);
    return 0;
}