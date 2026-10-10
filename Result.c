#include <stdio.h>

int main(){
    int s1, s2 , s3 , s4 , s5 , total;
    float per;
    printf("Enter the marks in subject 1 : ");
    scanf("%d", &s1);
    printf("Enter the marks in subject 2 : ");
    scanf("%d", &s2);
    printf("Enter the marks in subject 3 : ");
    scanf("%d", &s3);
    printf("Enter the marks in subject 4 : ");
    scanf("%d", &s4);
    printf("Enter the marks in subject 5 : ");
    scanf("%d", &s5);

    total= s1+s2+s3+s4+s5 ;
    per = (total/5);
    if(per<40){
        printf("You failed");
        printf("%f",per);
    }
    else if(s1<33 || s2<33 || s3<33 || s4<33 || s5<33){
        printf("You failed");
        printf("Else if");
    }
    else{
        printf("Surprisingly you passed.");
    }
    return 0;
}