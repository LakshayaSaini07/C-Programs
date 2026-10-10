# include <stdio.h>
int main(){
    int n , f ,i;
    printf("Enter any number here : ");
    scanf("%d",&n);
    f = 1;
    for(i=1;i<=n;i++){
        f = f*i;
    }
    printf("The factorial is = %d",f);
    return 0;
}
