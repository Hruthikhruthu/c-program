#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,ans;
  char ch;
  clrscr();
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("press'+'for addition\n");
  printf("press'-'for subtraction\n");
  printf("press'*'for multiplication\n");
  printf("press'/'for division\n");
  printf("press'%'for modulus\n");
  printf("enter your choice\n");
  fflush(stdin);
  scanf("%c",&ch);
  switch(ch)
  {
    case '+': ans=a+b;
	  printf("sum=%d",ans);
	  break;
    case '-': ans=a-b;
	  printf("sum=%d",ans);
	  break;
    case '*': ans=a*b;
	   printf("sum=%d",ans);
	   break;
    case '/':if(b==0)
		{
		  printf("divide by zero error\n");
		}
	     else
		 {
		   ans=a/b;
		   printf("sum=%d",ans);
		 }

	    break;
    case '%': ans=a%b;
	    printf("sum=%d",ans);
	    break;
    default: printf("wrong choice");
  }
    getch();
}