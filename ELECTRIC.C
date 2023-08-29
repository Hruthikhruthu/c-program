#include<stdio.h>
#include<conio.h>
main()
{
  char name[20];
  float units,mincharge=100,charge;
  clrscr();
  printf("enter ur name\n");
  gets(name);
  printf("enter number of units\n");
  scanf("%f",&units);
  if(units<=200)
    {
      charge=units*0.80;
    }
  else if(units<=300)
    {
      charge=200*0.80+(units-200)*0.90;
    }
  else if(units>300)
    {
      charge=200*0.80+100*0.90+(units-300)*1;
    }
  charge=charge+mincharge;
  if(charge>400)
    {
      charge=charge+charge*0.15;
    }
  printf("name=%s\n",name);
  printf("units=%f\n",units);
  printf("amount=%f\n",charge);
  getch();
}
