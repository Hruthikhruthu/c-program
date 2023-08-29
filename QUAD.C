#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,d,e,f;
  clrscr();
  printf("enter three numbers\n");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0)
     {
       printf("invalid outputs\n");
       getch();
       exit(0);
     }
  d=b*b-4*a*c;
  if(d>0)
     {
       printf("roots are distinct\n");
       e=(-b+sqrt(d))/(2*a);
       f=(-b-sqrt(d))/(2*a);
       printf("root1=%f\nroot2=%f\n",e,f);
       getch();
       exit(0);
     }
  if(d==0)
     {
       printf("roots are equal\n");
       e=-b/(2*a);
       f=-b/(2*a);
       printf("root1=%f\nroot2=%f\n",e,f);
       getch();
       exit(0);
     }
  if(d<0)
     {
       printf("roots are imagenary\n");
       e=-b/(2*a);
       f=sqrt(abs(d))/(2*a);
       printf("root1=%f+i%f\nroot2=%f-i%f\n",e,f,e,f);
       getch();
       exit(0);
     }
}


