#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
  int a[10],n,i,*ptr,sum=0,mean,std,stdev=0;
  clrscr();
  printf("enter the size of an array\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++)
      {
	sum=sum+*ptr;
	ptr++;
      }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
      {
	stdev=stdev+pow(mean,2);
	ptr++;
      }
    std=sqrt(stdev/n);
    printf("sum=%d\n",sum);
    printf("mean=%d\n",mean);
    printf("stdev=%d\n",std);
    getch();
}



