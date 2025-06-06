#include<stdio.h>
void main(){
    int n=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    printf("Factorial = %d",fact);
}