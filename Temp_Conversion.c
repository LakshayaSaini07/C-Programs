#include <stdio.h>

int temp(){
    int ans , f , c, num ;
    char ch;
    if (ch=='y'|| ch=='Y')
    {
        printf("Enter the Temperature in Celcius : ");
        scanf("%d", &c);
        ans = (c*9/5) + 32;        
        printf("The Temperature in Fahrenheit is : %d", ans);
    }
    else if(ch ==gbxn'n' || ch =='N')
    {
        printf("Enter the temperature in Fahrenheit : ");
        scanf("%d",&f);
        ans = (f - 32)*5/9;
        printf("The Temperature in Celcius is : %d", ans);
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}
int main(){
    int c , f , num , ans;
    char ch;
    printf("Press y/n if you want convert Temp to Fahrenheit :  ");
    scanf("%c",&ch);
    int temp();
    return 0;
}