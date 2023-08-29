#include<stdio.h>
main()
{
    int a[20],i,n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("The array with even numbers are\n ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
    }
}
