# include <stdio.h>
int main(){
    int a , b ,c , sum;
    printf("Enter all the three angles: ");
    scanf("%d%d%d", &a,&b,&c);
    sum = a+b+c;
    if(sum == 180){
        printf("Valid triangle");
    }
    else{
        printf("Not a valid triangle");
    }
    return 0;
}