#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],i,found=0,key,n;
  clrscr();
  printf("enter the size of an array\n");
  scanf("%d",&n);
  printf("enter the array of an element\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("enter an element to be searched\n");
  scanf("%d",&key);
   for(i=0;i<n;i++)
     {
       if(a[i]==key)
	 {
	   found=1;
	   break;
	 }
     }
   if(found==1)
     {
       printf("successful\n");
     }
     else
	 printf("not successful\n");
  getch();
}

