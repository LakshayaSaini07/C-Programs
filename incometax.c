#include <stdio.h>

float tax(int sal){
    int slab1=400000*0.05 , slab2=300000*0.1 , slab3=200000*0.15 , slab4=300000*0.2;
    if (sal<=300000){
        tax = 0;
    }
    elif(sal>=300000 && sal<=700000){
        sal = sal - 300000;
        tax = (sal*0.05);
    }
    elif(sal>=700000 && sal<=1000000){
        sal = 1000000 - 700000;
        tax = (sal*0.1) + slab1;
    }
    elif(sal>=1000000 && sal<=1200000){
        sal = 1200000 - 1000000;
        tax = (sal*0.15)+ slab2 + slab1;
    }
    elif(sal>=1200000 && sal<=1500000){
        sal = 1500000 - 1200000;
        tax = (sal*0.2)+ slab3 + slab2 + slab1;
    }
    else{
        sal = sal - 1500000;
        tax = (sal*0.3)+slab4 + slab3 + slab2 + slab1;
    }
    return tax;
}
int main(){
    int sal;
    float tax;
    printf("Enter your Salary : ");
    scanf("%d", &sal);
    float tax(sal);
    printf("Your Tax = %.2f", tax);
    return 0;
}