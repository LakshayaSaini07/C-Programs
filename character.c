# include <stdio.h>
int main(){
    char ch;
    printf("Enter any character from keyboard - ");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90){
        printf("capital letter");}
    if(ch>=97 && ch<=122){
        printf("Small letter");}
    if(ch>=48 && ch<= 57){
        printf("Number");}
    if((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||ch>=123){
        printf("Special symbol");}
    return 0;
    }
    
    