#include <stdio.h>
int sum(int n);
int main()
{
    int n=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int total=sum(n);
    printf("Sum = %d",total);
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}