#include <stdio.h>

int main()
{
    int dig=0,n=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0){
        dig++;
        n/=10;
    }
    printf("There are %d digits",dig);
    return 0;
}