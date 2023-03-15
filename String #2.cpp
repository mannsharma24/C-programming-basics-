////Ques~Reverse of string :-
//#include<stdio.h>
//int main()
//{
//	char a[20],temp;
//	int l,i,j;
//	printf("\nEnter any String : ");
//	gets(a);
//	for(l=0;a[l]!='\0';l++);
//	j=l-1;
//	for(i=0;i<l/2;i++)
//	{
//		temp=a[i];
//		a[i]=a[j];
//		a[j]=temp;
//	j--;
//	}
//	printf("Reversed String is : %s",a);
//	return 0;
//}


//////Ques~Reverse of string :-
//#include<stdio.h>
//int main()
//{
//	char a[20],temp;
//	int l,i,j;
//	printf("\nEnter any String : ");
//	gets(a);
//	for(l=0;a[l]!='\0';l++);
//	j=l-1;
//	for(i=0;i<l/2;i++)
//	{
//		if (a[i]!=a[j])
//		{
//			printf("\nNot a Pallendrome");
//			return 0;
//		}
//		j--;
//	}
//	return 0;
//}


/////QuesCount alphabets
/*
#include<stdio.h>
int main()
{
	char a[20],temp;
	int i,actr=0,vctr=0,cctr=0,spctr=0,tctr=0,nctr=0,newctr=0;
	printf("\nEnter any String : ");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		if ((a[i]>=65 && a[i<=90])||(a[i]>=97 && a[i]<=122))
		{
			actr++;
			if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
				vctr++;
			else
				cctr++;
		}
		else if ((a[i]>=48 && a[i]<=57))
			nctr++;
		else if (a[i]==' ')
			spctr++;
		else if (a[i]=='\t')
			tctr++;
		else if (a[i]=='\n')
			newctr++;
	}
	printf("\nTotal Alphabets  : %d",actr);
	printf("\nTotal Vowels are : %d",vctr);
	printf("\nTotal Consonants : %d",cctr);
	printf("\nTotal Numbers are : %d",nctr);
	printf("\nTotal Spaces  : %d",spctr);
	printf("\nTotal tabs are : %d",tctr);
	printf("\nTotal new line  : %d",newctr);
	return 0;
}*/


//////Ques~String Function :----------------------------------
/*
					strlen(a)
					strupr(a)
					strlwr(a)
					strrev(a)
					strcat(a,b)
					strcmp(a,b)
*/

////Ques~Check Pallendrome string by string function
/*#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100];
  printf("Enter a string to check if it's a palindrome\n");
  gets(a);
  strcpy(b, a);  // Copying input string
  strrev(b);  // Reversing the string
  if (strcmp(a, b) == 0)  // Comparing input string with the reverse string
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");
  return 0;
}*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *username;
	char *password;

	printf("Enter the username: ");
	gets(username);

	printf("\nEnter the password: ");
	gets(password);

	if(strcmp(username, "user") == 0){
		//username verification sucessful
		//next step is to verify the password
		if(strcmp(password, "default") == 0){
			//password verification also successful
			printf("\nUser successfully logged in...");
		}else{
			//invalid password. Report it
			printf("\nPassword entered is invalid");
		}
	}else{
		//invalid username. Report it
		printf("\nUsername entered is invalid");
	}

	getch();
}
