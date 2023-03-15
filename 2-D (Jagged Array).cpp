/////Ques~ Input a 2-D array

/*#include<stdio.h>
int main()
{
	int a[2][3],i,j;
	printf("\nEnter 6 number :~ ");
	for (i==0;i<2;i++)
	{
		for (j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	return 0;
}*/

////Ques~ Priniting of 2-D array

/*#include<stdio.h>
int main()
{
	int a[2][3],i,j,k,l;
	printf("\nEnter 6 number :~ ");
	for (i==0;i<2;i++)
	{
		for (j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for (k=0;k<2;k++)
	{
		for (l=0;l<3;l++)
			printf("%d ",a[k][l]);
	}
	return 0;
}*/


////Ques~
/*								2   4   6
								8  10  12
*/
/*
#include<stdio.h>
int main()
{
	int a[2][3]={2,4,6,8,10,12},i,j;
	printf("\nMatrix elements are : ");
	for (i=0;i<2;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	return 0;
}*/

////////Ques~1---->Addition of matrices :-
/*#include<stdio.h>
int main()
{
	int a[2][3]={1,2,3,4,5,6},b[2][3]={7,8,9,10,11,12},c[2][3],i,j;
	printf("\nSum of Matrix elements are : ");
	for (i=0;i<2;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
	}
	return 0;
}*/


//////////if we take same rows(i) and column(j)
/*#include<stdio.h>
int main()
{
	int a[2][2]={1,2,3,4},b[2][2]={7,8,9,10},c[2][2],i,j;
	printf("\nSum of Matrix elements are : ");
	for (i=0;i<2;i++)
	{
// 		printf("\n");
		for (j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
	}
	return 0;
}*/


////Ques~2)Sum of Diagonal elements :~
/*#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum1=0,sum2=0;
	printf("\nSum of Matrix elements are : ");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (i==j)
				{
					sum1=sum1+a[i][j];
				}
			if (i+j==8)
				{
					sum2=sum2+a[i][j];
				}
		}
	}
	printf("\nSum of Diagonal 1) \ : %d and Sum of Diagonal 2) / : %d",sum1,sum2);
	return 0;
}*/

/*--------------------------------------------------From net-----------------------------------------------------------------------------*/
/*#include<stdio.h>

int main()
{
 int i,j,n;
 float a[10][10], sum=0.0;

 printf("Enter order of matrix:\n");
 scanf("%d", &n);
 printf("Enter matrix elements:\n");
 for(i=0;i< n;i++)
 {
  for(j=0;j< n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%f", &a[i][j]);
  }
 }
 for(i=0;i< n;i++)
 {
  for(j=0;j< n;j++)
  {
   if(i==j || i+j==n-1)
   {
    sum = sum + a[i][j];
   }
  }
 }
 printf("Sum = %.1f\n", sum);

return 0;
}*/

///Ques-3)Transporse of a matrix :~
/*#include <stdio.h>
 
int main()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];
 
  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)
      printf("%d\t", transpose[c][d]);
    printf("\n");
  }

  return 0;
}*/


////Ques-5) Diagonal \ same and replace the adjucent elements w.r.t each other :--------->
/*#include <stdio.h>
 
int main()
{
  int m, n, c, d,temp, a[10][10];
 
  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &a[c][d]);
 
  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    	{
    		if (d>c)
    		{	
				temp=a[d][c];
    			a[d][c]=a[c][d];
    			a[c][d]=temp;
			}	
		}
	}
	for (c=0;c<m;c++)
	{
		printf("\n");
		for (d=0;d<n;d++)
		{
			printf("%d ",a[c][d]);
		}
	}
	return 0;
}*/


/////Ques-4)Multiplicaation of matrices
/*#include<stdio.h>
int main()
{
	int a[2][3]={1,2,3,4,5,6},b[2][3]={7,8,9,10,11,12},c[2][3],i,j;
	printf("\nProduct of Matrix elements are : ");
	for (i=0;i<2;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d ",c[i][j]);
		}
	}
	return 0;
}*/

////Ques-5)Identity matrices

/*#include <stdio.h>
 
int main ()
{
	int a[10][10];
	int i = 0, j = 0, row = 0, col = 0;
 
	printf ("Enter the order of the matrix (mxn):\n");
	printf ("where m = number of rows; and\n");
	printf ("      n = number of columns\n");
	scanf ("%d %d", &row, &col);
 
	int flag = 0;
 
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
 
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}
 
	if (flag == 0)
	{
		printf ("It is a IDENTITY MATRIX\n");
	}
	else
	{
		printf ("It is NOT an identity matrix\n");
	}
 
	return 0;
}*/


/////Ques---Upper triangle :--
/*#include<stdio.h>
int main()
{
	int a[3][3],i,j,flag=0;
	printf("\nEnter 6 values for Arrays : ");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for (i=0;i<3;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if(i>j && (a[i][j]!=0))
				flag=1;
				break;
		}
   	}
	if (flag==1)
		printf("\nNOT A UPPER-TRIANGLE");
	else
		printf("\nA UPPER-TRIANGLE");
	return 0;
}*/


////Ques~
/*#include<stdio.h>
int main()
{
	int x[3][3]={{5,3,4},{7,2,9},{2,8,6}},r,c,i,j,a[3],temp;
	
	printf("\nMatrix elements are:");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<3;c++)
		{
			printf("%d ",x[r][c]);
		}
	}
	printf("\n\n");
	
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			a[c]=x[r][c];
		}
		
		for(i=1;i<3;i++)
		{
			for(j=0;j<3-i;j++)
			{
			if(a[j]>a[j+1])				
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			}
		}
		
		for(c=0;c<3;c++)
		{
			x[r][c]=a[c];
		}
	}
	
	printf("\nMatrix elements are:");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<3;c++)
		{
			printf("%d ",x[r][c]);
		}
	}
	
	return 0;
}*/


///Ques~
/*#include<stdio.h>
int main()
{
	int a[2][3]={{5,3,4},{7,2,9}},i,j,rtot,ctot;
	
	
	printf("\nMatrix elements with totals:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		rtot=0;
		for(j=0;j<3;j++)
		{
			rtot=rtot+a[i][j];
			printf("%d\t",a[i][j]);
		}
		printf("%d",rtot);
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		ctot=0;
		for(j=0;j<2;j++)
		{
			ctot=ctot+a[j][i];
		}
		printf("%d\t",ctot);
	}
	return 0;
}*/


////Ques~
 
