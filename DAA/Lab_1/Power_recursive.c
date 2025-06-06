#include <stdio.h>
int power(int b,int p);
int main()
{
    int base=0,p=0;
    printf("Enter base : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&p);
    int ans=power(base,p);
    printf("Answer = %d",ans);
    return 0;
}
int power(int b,int p){
    if (p==1){
        return b;
    }
    else{
        return b*power(b,p-1);
    }
}