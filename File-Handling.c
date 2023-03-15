#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fptr;
	char s[80];

	fptr=fopen("rhyme.txt","a");
	if(fptr==NULL)
	{
		printf("\nUnable to open file..");
		return 0;
	}
	printf("\nEnter poem line by line and press onlt enter to terminate..\n");
	while(strlen(gets(s))!=0)
	{
		fputs(s,fptr);
		fputs("\n",fptr);
	}
	fclose(fptr);

	fptr=fopen("rhyme.txt","r");
	if(fptr==NULL)
	{
		printf("\nUnable to open file..");
		return 0;
	}
	printf("\n\nReading data from file....\n");
	while(fgets(s,79,fptr)!=NULL)
	{
		printf("%s",s);
	}
	fclose(fptr);




	return 0;
}


/*#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fptr;
	char ch;
////-----------------------------------------for Overwrite----------------------------------------------------------------------
/*	fptr=fopen("poem.txt","a");
	if(fptr==NULL)
	{
		printf("\nUnable to open file..");
		return 0;
	}
	printf("\nEnter poem char by char and press ^z to terminate..\n");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fptr);
	}
	fclose(fptr);*/
////----------------------------------------------for Reading--------------------------------------------------------------------
/*	fptr=fopen("poem.txt","r");
	if(fptr==NULL)
	{
		printf("\nUnable to open file..");
		return 0;
	}
	printf("\n\nReading data from file....\n");
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fptr);

		return 0;
}*/
