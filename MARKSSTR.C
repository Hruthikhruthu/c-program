#include<stdio.h>
#include<conio.h>
struct student
{
  char name[20];
  char usn[20];
  int m1,m2,m3;
  float avg;
};
void main()
{
  struct student s[20];
  int i,n;
  float classavg=0;
  clrscr();
  printf("enter the number of students\n");
  scanf("%d",&n);
  printf("enter student details\n");
  for(i=1;i<=n;i++)
     {
       printf("enter details of student %d\n",i);
       printf("enter name\n");
       scanf("%s",s[i].name);
       printf("enter usn\n");
       scanf("%s",s[i].usn);
       printf("enter 3 marks\n");
       scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
       s[i].avg=(s[i].m1+s[i].m2+s[i].m3/3);
     }
  for(i=1;i<=n;i++)
    {
      classavg=classavg+s[i].avg;
    }
    classavg=classavg/n;
  printf("classaverage=%f\n",classavg);
  printf("above classaverage students details\n");
  for(i=1;i<=n;i++)
    {
      if(s[i].avg>=classavg)
	{
	  printf("name=%s\n usn=%s\n avg=%f\n",s[i].name,s[i].usn,s[i].avg);
	}
    }
  printf("below classaverage marks students details\n");
  for(i=1;i<=n;i++)
    {
      if(s[i].avg<=classavg)
      {
	printf("name=%s\n usn=%s\n avg=%f\n",s[i].name,s[i].usn,s[i].avg);
      }
    }
  getch();
}

