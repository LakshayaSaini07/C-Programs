# include <stdio.h>
# include <math.h>
int main(){
    int n ,leap,day;
    int d , total;
    printf("Enter any year - ");
    scanf("%d",&n);
    d = (n-1)*365;
    leap = (n-1)/4-(n-1)/100+(n-1)/400;
    total = d+leap;
    printf("%ld",total);
    day = total%7;
    if (day==0){
        printf("\nMonday");
    }
    if (day==1){
        printf("\ntuesday");
    }
    if (day==2){
        printf("\nwednesday");
    }
    if (day==3){
        printf("\nTHursday");
    }
    if (day==4){
        printf("\nFriday");
    }
    if (day==5){
        printf("\nSaturday");
    }
    if (day==6){
        printf("\nSunday");
    }
    return 0;
}
