#include <stdio.h>
int main()
{
    int n=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum from 1 to %d = %d",n,sum);
    return 0;
}