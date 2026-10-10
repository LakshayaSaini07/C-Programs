# include <stdio.h>
# include <math.h>
int main(){
    int n ,hour;
    float pay;
    n = 1;
    while(n<11){
        printf("\nEnter the number of hours worked by employee %d- ",n);
        scanf("%d",&hour);
        if (hour >=40){
            pay = (hour - 40)* 120.00;
        }
        else {
            pay = 0;
        }
        n++;
        printf("hours = %d,overtime pay = %f", hour,pay);
    }
    return 0;
}