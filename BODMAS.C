#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,ans;
  char ch;
  clrscr();
  printf("menu\n");
  printf("press'+'for addition\n");
  printf("press'-'for subtraction\n");
  printf("press'*'for multiplication\n");
  printf("press'/'for division\n");
  printf("press'%'for modulus\n");
  printf("enter two numbers");
  scanf("%d%d", &a,&b);
  fflush(stdin);
  printf("enter your choice");
  scanf("%c",&ch);

    if(ch=='+')
     {
       ans=a+b;
       printf("sum=%d",ans);
     }
    else if(ch=='-')
	 {
	  ans=a-b;
	  printf("sum=%d",ans);
	 }
	 else if(ch=='*')
	      {
		ans=a*b;
		printf("sum=%d",ans);
	      }
	      else if(ch=='/')
		   {
		     ans=a/b;
		     printf("sum=%d",ans);
		   }
		   else
		      {
		       ans=a%b;
		       printf("sum=%d",ans);
		      }
		      getch();
}

