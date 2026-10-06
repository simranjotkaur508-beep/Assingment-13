#include<stdio.h>
int main()
{
    int n,a=1,s=1;
    printf("enter a number");
    scanf("%d",&n);
   
     while(a<=n)
    {
        s=s+a*2-1;
        a++;
    }
    printf("sum is%d",s);
    return 0;
}