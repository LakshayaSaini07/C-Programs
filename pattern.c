# include <stdio.h>
int main(){
    int num ,i, j;
    printf("Enter the number of term:");
    scanf("%d",&num);
    for(i= 0;i<num;i++){
        for ( j = 0; j<(2*i)+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}