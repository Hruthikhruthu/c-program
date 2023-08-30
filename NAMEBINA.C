#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
  char a[10][10],key[10];
  int i,n,low,mid,high,position,found=0;
  clrscr();
  printf("enter the size of an array\n");
  scanf("%d",&n);
  printf("enter the name in ascending order\n");
  for(i=0;i<n;i++)
    {
      scanf("%s",&a[i]);
    }
  printf("enter the name to be searched\n");
  scanf("%s",key);
  low=0;
  high=n-1;
  while(low<=high)
       {
	 mid=(low+high)/2;
	 if(strcmp(a[mid],key)==0)
	  {
	    found=1;
	    position=mid+1;
	    break;
	  }
	  else if(strcmp(a[mid],key)<0)
		 low=mid+1;
		 else
		      high=mid-1;
      }
  if(found==1)
    {
      printf("name found at position %d\n",position);
    }
    else
	{
	  printf("name not found\n");
	}
     getch();
}
