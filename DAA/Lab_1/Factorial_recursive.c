#include <stdio.h>
int fact(int n);
int main()
{
    int n=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ans=fact(n);
    printf("Factorial = %d",ans);
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}