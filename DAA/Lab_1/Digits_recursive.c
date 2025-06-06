#include <stdio.h>
int dig(int n);
int main()
{
    int n=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ans = dig(n);
    printf("There are %d digits",ans);
    return 0;
}
int dig(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1+dig(n/10);
    }
}