////Ques-1):~WAP to cal length ofbstring :-
/*#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("\nEnter any string : ");
	gets(a);
	i=0;
	while (a[i]!='\0')
	{
		i++;
	}
	printf("\nLength is %d. ",i);
	return 0;
}*/

//OR

/*#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("\nEnter any string : ");
	gets(a);
	for (i=0;a[i]!='\0';i++);
	printf("\nLength is %d. ",i);
	return 0;
}*/


/////Ques~2)-Convert upeer case into lower case
/*#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("\nEnter any string : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if (a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("\nLower string is %s. ",a);
	return 0;
}*/

//////Ques6)~copy
/*#include<stdio.h>
int main()
{
	char a[20],b[20];
	int i;
	printf("\nEnter any string : ");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';     //or a[i]='\0' 
	printf("\nCopied string is %s. ",b);
	return 0;
}*/


//////Ques~7)Concate 2 strings
/*#include<stdio.h>
int main()
{
	char a[20],b[20],c[30];
	int i=0,j=0;
	printf("\nEnter 1-st String : ");
	gets(a);
	printf("\nEnter 2-nd String : ");
	gets(b);
	while (a[i]!='\0')
	{
		c[j]=a[i];
		i++;
		j++;
	}
	i=0;
	while (b[i]!='\0')
	{
		c[j]=b[i];
		i++;
		j++;
	}
	c[j]='\0';
	printf("\nConcated String is %s . ",c);
	return 0;
}*/


///Ques~7)Count an occurence :
/*#include<stdio.h>
int main()
{
	char a[20],b[20],to_search;
	int i=0,ctr=0;
	printf("\nEnter String                    : ");
	gets(a);
	printf("\nEnter Char to see its occurence : ");
	to_search=getchar();
	while (a[i]!='\0')
	{
		if (a[i]==to_search)
		{
			ctr++;
		}
		i++;
	}
	printf("\nThe Character Occurs %d times.",ctr);
	return 0;
}*/

////Ques~Find and Replace
/*#include<stdio.h>
int main()
{
	char a[20],char_search,repl_char;
	int i=0,ctr=0;
	printf("\nEnter String                    : ");
	gets(a);
	printf("\nEnter the char to search        : ");
	scanf("%c",&char_search);
	printf("\nEnter Char to replace with      : ");
	fflush(stdin);
	scanf("%c",&repl_char);

	
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]==char_search)
		{
			a[i]=repl_char;
		}
	}
	
	printf("\nThe Character After Modified   : %s ",a);
	return 0;
}*/



/////Ques~
#include<stdio.h>
int main()
{
	char a[5]="Mann";
	for(int i=0;i<=3;i++)
	{
		int val=(int)a[i];
		if(val>=65 &&val<=90)
		{
			val+=32;
			a[i]=(char)val;
		}
	}
	printf("%s",a);
	return 0;
}














