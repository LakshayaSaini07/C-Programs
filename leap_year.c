# include <stdio.h>
int main(){
    int n;
    printf("Enter any year :");
    scanf("%d",&n);
   if(n%100==0 || n%400!=0 && n%4==0){
    printf("Leap year");
   }
   else{
    printf("Not a leap year");
   }
    return 0;
}