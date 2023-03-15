#include<stdio.h>
#include<math.h>

int main()
{
	float sum=0,x,d,p;
	int fact,n,i,j;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	printf("\nEnter the value of x:");
	scanf("%f",&x);
	for(i=1;i<=n;i++)
	{
		p=pow(x,i);
		fact=1;
		for(j=i;j>=1;j--)
		{
			fact=fact*j;
		}
		d=p/fact;
		if(i%2==0)
			sum=sum-d;
		else
			sum=sum+d;
	}
	printf("\nSum is %f",sum);
	
	
	return 0;
}
