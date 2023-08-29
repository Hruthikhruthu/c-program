#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,a[20],temp,n;
  clrscr();
  printf("enter size of an array\n");
  scanf("%d",&n);
  printf("enter array elements\n");
   for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
   for(i=0;i<n-1;i++)
     {
       for(j=0;j<n-i-1;j++)
	 {
	   if(a[j]>a[j+1])
	    {
	      temp=a[j];
	      a[j]=a[j+1];
	      a[j+1]=temp;
	    }
	 }
     }
   printf("sorted array element\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
}

