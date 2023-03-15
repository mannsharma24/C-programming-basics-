////Ques-----Taking input from user

/*#include<stdio.h>
int main()
{
	int i,a[5];
	printf("\nEnter any 5 numbers : ");
	for (i=0;i<5;i++)
	{
		scanf("\n %d",&a[i]);
//////		printf(" %d ",a[i]);								//print value after input
	}
	for (i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/


////Ques-----Add 10 to each element

/*#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		a[i]=a[i]+10;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}*/


////Ques-print square and cube of each element
/*#include<stdio.h>
int main()
{
	int i,j,a[7],n,square,cube;
	printf("\nEnter how much elements you want ? ");
	scanf("\n%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSquare is :");  
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]*a[i]);
	}	
	
	printf("\nCube is :");  
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]*a[i]*a[i]);
	}	
	return 0;
}*/

////Ques~sum of even numbers
/*#include<stdio.h>
int main()
{
	int i,j,a[7],n,sum=0;
	printf("\nEnter how much elements you want ? ");
	scanf("\n%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if (a[i]%2==0)
			sum=sum+a[i];	
	}
	printf("\nThe Sum of even is : %d",sum);
	return 0;
}*/

///Ques~half even double odd:
/*#include<stdio.h>
int main()
{
	int a[7],n,i;
	printf("\nEnter how much elements you want ? ");
	scanf("\n%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			a[i]=a[i]/2;
		else
			a[i]=a[i]*a[i];
	printf("%d ",a[i]);	
	}
}*/

////Ques~Sum and average
/*#include<stdio.h>
int main()
{
	int i,a[7],n,sum=0,average;
	printf("\nEnter how much elements you want ? ");
	scanf("\n%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The Sum is : %d",sum);
	average=sum/n;
	printf("\nThe Average is %d",average);
	return 0;
}*/

////Ques~Add only prime
/*#include<stdio.h>
int main()
{
	int i,j,a[7],n,sum=0;
	printf("\nEnter how much elements you want ? ");
	scanf("\n%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=2;i<=n;i++)
	{
		if (a[i]%i==0)
			sum=sum+a[i];	
	}
	printf("\nThe Sum of Prime is : %d",sum);
	return 0;
}*/


////Ques-factorial        :~
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i,j;
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	for(i=0;i<5;i++)
	{
		int fact=1;
		for (j=a[i];j>=1;j--)
		{
			fact=fact*j;
		}
		printf("\n%d %d",a[i],fact);
	}
	return 0;
}
