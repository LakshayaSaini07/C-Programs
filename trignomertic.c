# include <stdio.h>
# include <math.h>
int main(){
    float a , s ,c ,t;
    printf("write any angle :");
    scanf("%f", &a);
    a = a*3.14/180;
    s = sin(a);
    c = cos(a);
    t = tan(a);
    printf("%f,%f , %f", s,c,t );
    return 0;
}