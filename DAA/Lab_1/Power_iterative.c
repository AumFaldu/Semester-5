#include <stdio.h>
int sum(int n);
int main()
{
    int base=0,power=0;
    printf("Enter base : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&power);
    int ans=1;
    for(int i=0;i<power;i++){
        ans*=base;
    }
    printf("Answer = %d",ans);
    return 0;
}