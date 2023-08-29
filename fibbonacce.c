#include<stdio.h>
main()
{
    int fib1=0,fib2=1,fib3,i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d\t %d\t",fib1,fib2);
    for(i=3;i<=n;i++)
    {
        fib3=fib1+fib2;
        printf("%d\t",fib3);
        fib1=fib2;
        fib2=fib3;
    }
}
