/////Ques-Max and min in array
/*#include<stdio.h>
int main()
{
	int a[50],max,min,n,i;
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
		else							///if also used Acc to mam
			min=a[i];
	}
	printf("\nMaximum is : %d",max);
	printf("\nMinimum is : %d",min);
	return 0;
}*/


////Ques-Linear Search
/*-----------------------------------------------CASE-FOR MULTIPLE ELEMENTS IN ARRAY E.G.-->{1,1,2,4,5,1}*/
/*#include<stdio.h>
int main()
{
	int a[50],max,min,n,ctr=0,num_s,i;
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to search : ");
	scanf("%d",&num_s);
	for (i=0;i<n;i++)
	{
		if (a[i]==num_s)
		{
			printf("\nNum. is at %d index",i);
			ctr++;
		}
	}
	if (ctr==0)
		printf("\nNo. Does not exist.....");
	return 0;
}*/


////Ques-count occurence 
/*#include<stdio.h>
int main()
{
	int a[50],max,min,n,ctr=0,num_s,i;
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to search : ");
	scanf("%d",&num_s);
	for (i=0;i<n;i++)
	{
		if (a[i]==num_s)
		{
			ctr++;
		}
	}
	if (ctr==0)
		printf("\nNo. Does not exist.....");
	else
		printf("\nNo. exist %d times",ctr);
	return 0;
}*/


////Ques-Linear Search 
/*-------------------------------------------------------------CASE-ONLY FOR ONE ELEME SEARCH*/
/*#include<stdio.h>
int main()
{
	int a[50],max,min,n,found=0,num_s,i;                ///Here,Found take as a Flag
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to search : ");
	scanf("%d",&num_s);
	for (i=0;i<n;i++)
	{
		if (a[i]==num_s)
		{
			printf("\nNum. is at %d index",i);
			printf("\nNum. is at %d location",i+1);
			found=1;
			break;
		}
	}
	if (found==0)
		printf("\nNo. Does not exist.....");
	return 0;
}*/


////Ques-Binary Search :---------------------------------------------------->
/*#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int l=0,h=4,m,num_s;
	printf("\nEnter the number to search : ");
	scanf("%d",&num_s);
	while (l<=h)
	{
		m=(l+h)/2;
		if (num_s==a[m])
		{
			printf("\nNum. is at %d index & %d location.",m,m+1);
			return 0;
		}
		else if  (num_s>a[m])
			l=m+1;
		else
			h=m-1;
	}
	printf("\nNum does not exist.");
	return 0;
}*/


/////Ques-Decimal to binary Conversion : 
/*#include<stdio.h>
int main()
{
	int a[10],num,temp,rem,i,j;
	printf("\nEnter any number : ");
	scanf("%d",&num);
	while (num!=0)
	{
		rem=num%2;
		a[i]=rem;
		i++;
		num=num/2;
	}
	printf("\nBinary Eq of %d is ",temp);
	for (j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	return 0;
} */


/////Ques-Find and Replace :-------->
#include<stdio.h>
int main()
{
	int a[50],n,num_s,num_repl,i,j;
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to replace : ");
	scanf("%d",&num_s);
	printf("\nEnter the number to place   : ");
	scanf("%d",&num_repl);
	for (i=0;i<n;i++)
	{
		if (a[i]==num_s)
		{
			a[i]=num_repl;
		}
	}
	for (j=0;j<n;j++)
		printf("%d ",a[j]);
	return 0;
}	
