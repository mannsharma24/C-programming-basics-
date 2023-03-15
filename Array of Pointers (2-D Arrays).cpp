/*#include<stdio.h>
#include<malloc.h>

int main()
{
	int *p[3];
	int i,j;
	p[0]=(int *)malloc(3*sizeof(int));
	p[1]=(int *)malloc(3*sizeof(int));
	p[2]=(int *)malloc(3*sizeof(int)); 
	printf("\nEnter 9 nos:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//scanf("%d",(*(p+i)+j));
			scanf("%d",&p[i][j]);
		}
	}
	
	printf("\nMatrix elements are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			//printf("%d ",((p+i)+j));
			printf("%d ",p[i][j]);
		}
	}

	return 0;
}*/



/*int main()
{
	int *p[3],a[3],b[3],c[3];
	int i,j;
	p[0]=a;
	p[1]=b;
	p[2]=c;
	printf("\nEnter 9 nos:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//scanf("%d",(*(p+i)+j));
			scanf("%d",&p[i][j]);
		}
	}
	
	printf("\nMatrix elements are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			//printf("%d ",((p+i)+j));
			printf("%d ",p[i][j]);
		}
	}

	return 0;
}*/

/*#include<malloc.h>

int main()
{
	int **p;
	int i,j;
	p=(int*)malloc(3*sizeof(int));
	p[0]=(int *)malloc(3*sizeof(int));
	p[1]=(int *)malloc(3*sizeof(int));
	p[2]=(int *)malloc(3*sizeof(int)); 
	printf("\nEnter 9 nos:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//scanf("%d",(*(p+i)+j));
			scanf("%d",&p[i][j]);
		}
	}
	
	printf("\nMatrix elements are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			//printf("%d ",((p+i)+j));
			printf("%d ",p[i][j]);
		}
	}

	return 0;
}*/


/*#include<stdio.h>
#include<malloc.h>

int main()
{
	printf("\n%d %d %d %d",sizeof(char),sizeof(int),sizeof(float),sizeof(double));
	printf("\n%d %d %d %d",sizeof(char*),sizeof(int*),sizeof(float*),sizeof(double*));
	return 0;
}*/

#include<stdio.h>
#include<malloc.h>

int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	int (*p)[3]=a;
	printf("\n%d %d",p,&a[0][0]);
	printf("\nMatrix elements are:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",((a+i)+j));
			//printf("%d ",a[i][j]);
		}
	}

	return 0;
}

