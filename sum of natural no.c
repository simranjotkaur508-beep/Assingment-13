#include<stdio.h>
int main()
{
    int n,a=1,s=0;
    printf("enter a number");
    scanf("%d",&n);
   
    if(a<=n)
    {
        s=s+a;
        a++;
    }
    printf("sum is%d",s);
    return 0;
}