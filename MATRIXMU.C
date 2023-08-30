#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
  clrscr();
  printf("enter matrix order 1\n");
  scanf("%d%d",&m,&n);
  printf("enter matrix order 2\n");
  scanf("%d%d",&p,&q);
  printf("enter matrix a\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&a[i][j]);
	}
    }
  printf("enter matrix b\n");
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
	{
	  scanf("%d",&b[i][j]);
	}
    }
   if(n==p)
    {
      for(i=0;i<m;i++)
	{
	  for(j=0;j<q;j++)
	    {
	      c[i][j]=0;
	      for(k=0;k<n;k++)
	      {
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	      }
	    }
	 }
    }
    else
	printf("not possible");
   printf("matrix a\n");
   for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
	 {
	  printf("%d\t",a[i][j]);
	 }
       printf("\n");
     }
   printf("matrix b\n");
   for(i=0;i<p;i++)
     {
       for(j=0;j<q;j++)
	 {
	   printf("%d\t",b[i][j]);
	 }
       printf("\n");
     }
   printf("matrix c\n");
   for(i=0;i<m;i++)
     {
       for(j=0;j<q;j++)
	 {
	   printf("%d\t",c[i][j]);
	 }
       printf("\n");
     }
    getch();
}


