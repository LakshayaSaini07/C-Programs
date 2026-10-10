# include <stdio.h>
int main(){
    int n,lak[n], i,e , o;

    scanf("Enter the value of n: %d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&lak[i]);
    }
    e = 0;
    o = 0;
    for(i=0;i<5;i++){
        if(lak[i]%2==0){
            e +=1;
        }
        else 
        o +=1;
    }
    printf("Even numbers = %d",e);
    printf("Odd numbers are = %d",o);
    return 0;
}