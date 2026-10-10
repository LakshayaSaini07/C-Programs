# include <stdio.h>
int main(){
    float s1 , s2, s3,large, sum;
    printf("\nEnter the value of sides of triangle - ");
    scanf("%f%f%f",&s1,&s2,&s3);
    if (s1>s2){
        if(s1>s3){
            sum = s2+s3;
            large = s1;
        }
        else{
            sum = s1+s2;
            large = s3;
        }
    }
    else{
        if(s2>s3){
            sum = s1+s3;
            large = s2;
        }
        else {
            sum = s1+s2;
            large = s3;
        }
    }
    if(sum>large){
        printf("Valid triangle\n");
    }
    else {
        printf("Invalid triangle");
    }
    return 0;
}
