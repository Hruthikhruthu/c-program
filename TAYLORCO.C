#include<stdio.h>
#include<math.h>
void main()
{
  int i;
  float deg,rad,sum,flag=1,fact=1;
  clrscr();
  printf("enter a degree");
  scanf("%f",&deg);
  rad=deg*3.14159265/180;
  sum=1;
  for(i=2;i<=20;i=i+2)
    {
      fact=fact*(i-1)*i;
      if(flag==1)
	sum=sum-pow(rad,i)/fact;
      else
	  sum=sum+pow(rad,i)/fact;
      flag=!flag;
    }
  printf("without builtin function=%f\n",sum);
  printf("with builtin function=%f\n",cos(rad));
  getch();
}