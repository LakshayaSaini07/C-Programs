# include <stdio.h>
# include <math.h>
int main(){
    int bs;
    float ha , da , gs;
    printf("Enter the basic salary - ");
    scanf("%d", &bs);
    if (bs< 1500){
        ha = bs * 0.1;
        da = bs * 0.9;
        gs = bs + ha + da;
        printf("Gross salary = %f",gs);
    }
    else {
        ha = 500;
        da = bs * 0.98;
        gs = bs + ha + da;
        printf("Gross salary = %f",gs);
    }
    return 0;
}