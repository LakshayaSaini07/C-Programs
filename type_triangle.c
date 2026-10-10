# include <stdio.h>
int main(){
    int s1 , s2, s3,a,b,c;
    printf("\nEnter the value of sides of triangle - ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1==s2)&&(s2==s3)){
        printf("\nEquilateral Triangle");
    }
    if((s1==s2)&&(s2!=s3)){
        printf("\nIsoceles triangle");
    }
    if((s2==s3)&&(s3!=s1)){
        printf("\nIsoceles triangle");
    }
    if((s1==s3)&&(s1!=s2)){
        printf("\nIsoceles triangle");
    }
    if((s1!=s2 && s2!=s3 && s1!=s3)){
        printf("\nScalene Triangle");
    }
    a = (s1*s1)==(s2*s2)+(s3*s3);
    b = (s2*s2)==(s1*s1)+(s3*s3);
    c = (s3*s3)==(s2*s2)+(s1*s1);
    if(a||b||c){
        printf("\nRight angle triangle");
    }
    return 0;
}