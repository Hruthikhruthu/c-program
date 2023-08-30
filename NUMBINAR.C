#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a[10],key,low,mid,high,position,found=0,n;
  clrscr();
  printf("enter the size of an array\n");
  scanf("%d",&n);
  printf("enter the array elements \n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("enter a number to be searched\n");
  scanf("%d",&key);
  low=0;
  high=n-1;
  while(low<=high)
   {
     mid=(low+high)/2;
     if(a[mid]==key)
       {
	 found=1;
	 position=mid+1;
	 break;
       }
       else if(a[mid]<key)
	      low=mid+1;
	      else
		 high=mid-1;
    }
    if(found==1)
     {
       printf("number is found at position %d\n",position);
     }
     else
	{
	  printf("number not found\n");
	}
     getch();
}
