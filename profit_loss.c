# include <stdio.h>
int main(){
    int sp , cp , p , l ;
    printf("Enter the cost price = ");
    scanf("%d",&cp);
    printf("Enter the selling price = ");
    scanf("%d",&sp);
    p = sp - cp ;
    l = cp - sp;
    if (sp > cp){
        printf("The profit is = %d",p);
    };
    if (cp > sp){
        printf("the loss is = %d",l);
    };
    if (cp==sp){
        printf("No profit no loss");
    };
    return 0;
}