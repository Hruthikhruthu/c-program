#include<stdio.h>
int strlenght(char str1[20]);
void strcompare(char str1[20],char str2[20]);
void strconcatenate(char str1[20], char str2[20]);
void main()
{
  char str1[20],str2[20];
  int choice,ans;
  clrscr();
  printf("menu\n");
  printf("1 stringlenght\n");
  printf("2 stringcompare\n");
  printf("3 stringconcatenate\n");
  printf("enter your choice\n");
  scanf("%d",&choice);
  switch(choice)

  {
    case 1:printf("stringlenght\n");
		       printf("enter a string\n");
		       fflush(stdin);
		       gets(str1);
		       ans=strlenght(str1);
		       printf("lenght of a string=%d\n",ans);
		       getch();
		       break;
    case 2:printf("stringcompare\n");
			printf("enter first string\n");
			fflush(stdin);
			gets(str1);
			printf("enter second string\n");
			fflush(stdin);
			gets(str2);
			strcompare(str1,str2);
			getch();
			break;
    case 3 :printf("stringconcatenate\n");
			      printf("enter first string\n");
			      fflush(stdin);
			      gets(str1);
			      printf("enter second string\n");
			      fflush(stdin);
			      gets(str2);
			    strconcatenate(str1,str2);
			    getch();
			    break;
    default:printf("wrong choice\n");

  }
  getch();
}
int strlenght(char str1[20])
   {
     int len=0,i;
     for(i=0;str1[i]!='\0';i++)
       {
	 len=len+1;
       }
     return len;
   }
void strcompare(char str1[20],char str2[20])
    {
     int len1,len2,i;
     len1=strlenght(str1);
     len2=strlenght(str2);
     if(len1!=len2)
       {
	 printf("both are different\n");
       }
       else
	  {
	    for(i=0;str1[i]!='\0';i++)
	      {
		if(str1[i]!=str2[i])
		  {
		    printf("both are different\n");
		    exit(0);
		  }
	      }
	  }
     printf("both are same\n");
   }
void strconcatenate(char str1[20],char str2[20])
    {
      int k=0,i;
      char str3[20];
      for(i=0;str1[i]!='\0';i++)
	{
	  str3[k]=str1[i];
	  k++;
	}
      for(i=0;str2[i]!='\0';i++)
	{
	  str3[k]=str2[i];
	  k++;
	}
	str3[k]='\0';
	printf("concatenated string is %s\n",str3);
    }

