#include<stdio.h>
#include<stdio.h>
void main()
{
  int a[20], i,j,temp,min,n;
  clrscr();
  printf("enter the size of an array\n");
  scanf("%d",&n);
  printf("enter array elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=0;i<n-1;i++)
    {
      min=i;
      for(j=i+1;j<n;j++)
	{
	  if(a[j]<a[min])
	    {
	      min=j;
	    }
	}
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
    }
  printf("sorted array element\n");
     for(i=0;i<n;i++)
       {
	 printf("%d\n",a[i]);
       }
   getch();
}


