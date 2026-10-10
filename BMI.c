# include <stdio.h>
int main(){
    float w , h , bmi ;
    printf("Enter the weight here(in kgs) - ");
    scanf("%f",&w);
    printf("Enter the height (in metres) - ");
    scanf("%f",&h);
    bmi = w / (h*h);
    if(bmi<15){
        printf("Starvation");
    }
    else if(bmi<17.5){
        printf("Anorexic");
    }
    else if(bmi<18.5){
        printf("underweight");
    }
    else if(bmi<24.9){
        printf("ideal");
    }
    else if(bmi<25.9){
        printf("overdose");
    }
    else if(bmi<30.9){
        printf("obese");
    }
    else if(bmi>40){
        printf("morbidaly obese");
    }
    return 0;
}
