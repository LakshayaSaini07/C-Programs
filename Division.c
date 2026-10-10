# include <stdio.h>
# include <math.h>
int main(){
    int a , b ,c ,d ,e , t , per;
    printf("Enter the marks obtained by student in every subject - ");
    scanf("%d%d%d%d%d",&a,&b,&c ,&d , &e);
    t = a+b+c+d+e;
    per = t*0.2;
    printf("\n");
    if(per>=60){
        printf("First Division");
    }
    if ((per<=59)&&(per>=50)){
        printf("Second Division");
    }
    if((per<=49)&&(per>=40)){
        printf("Third division");
    }
    if(per<=40){
        printf("Fail");
    }
    return 0;
}