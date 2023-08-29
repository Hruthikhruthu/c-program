#include<stdio.h>
void main()
{
  int remainder,num,temp,rev=0;
  printf("enter a number");
  scanf("%d",&num);
  temp=num;
  while(num!=0)
  {
    remainder=num%10;
    rev=rev*10+remainder;
    num=num/10;
  }
  {
    if(rev==temp)
      printf("it is a palindrome");
    else
      printf("it is not a palindrome");
  }
}