////QUES-18)
/*
		    *
		   ***
		  *****
	     *******
*/
/*#include<stdio.h>
int main()
{
	int sp=3,i,j,n=1;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for (j=1;j<=n;j++)
		{
			printf("*");
		}
		sp=sp-1;
		n=n+2;
		printf("\n");
	}
	return 0;
}*/


///QUES-19)
/*    												*
												   ***
												  *****
												 *******
												  *****
												   ***
												    *
*/
//#include<stdio.h>
//int main()
//{
//	int i,j,n;
//	printf("\nENTER TERMS :");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		for (j=i;j<=n;j++)
//		{
//			printf(" ");
//		}
//		for (j=1;j<=n;j++)
//		{
//			printf("*");
//		}
//		for(j=1;j<i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//down side;
//	for (i=n-1;i>=1;i--)
//	{
//		for (j=i;j<=n;j++)
//		{
//			printf(" ");
//		}
//		for (j=1;j<=i;j++)
//		{
//			printf("*");
//		}
//		for (j=1;j<i;j++)
//		{	
//			printf("*");
//		}
//		printf("\n");
//    }
//	return 0;
//}	*/
/*-------------------------------------------------OR-----------------------------------------------*/
/*#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	printf("Enter Diamond Rows =  ");
 	scanf("%d", &rows);

    printf("Diamond Star Pattern\n");
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}

    for(i = rows - 1; i > 0; i--)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}

 	return 0;
}*/



///QUES-20)
/*                                               1
												121
											   12321
											  1234321
											 123454321 
											   	*/
//
//#include<stdio.h>
//int main()
//{
//	int i,j,sp=4;
//	for (i=1;i<=5;i++)	
//	{
//		for (j=1;j<=sp;j++)
//		{
//			printf(" ");
//		}
//		for (j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		for (j=i-1;j>=1;j--)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//		sp=sp-1;
//	}
//	return 0;
//}



////QUES-21)
/*
			4
			32
			210
			10-1-2
*/
/*#include<stdio.h>
int main()
{
	int i,j,n=1,x;
	for (i=4;i>=1;i--,n++)	
	{
		for (x=i,j=1;j<=n;j++,x--)
		{
			printf("%d",x);
		}
		printf("\n");
	}
	return 0;
}*/


/*QUES-22)
							1
						   212
						  32123
						 4321234
						543212345
*/

/*#include<stdio.h>
int main()
{
	int i,j,n=1,sp=4;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for (j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for (j=2;j<=i;j++)
		{
			printf("%d",j);
		}
		sp=sp-1;
		n=n+2;
		printf("\n");
	}
	return 0;
}*/


/*BY N -input*/
/*#include<stdio.h>
int main()
{
	int i,j,n=1,num,sp;
	printf("\nENTER THE VALUE OF N :");
	scanf("%d",&num);
	sp=num-1;
	for (i=1;i<=num;i++)
	{
		for (j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for (j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for (j=2;j<=i;j++)
		{
			printf("%d",j);
		}
		sp=sp-1;
		n=n+2;
		printf("\n");
	}
	return 0;
}*/


/*QUES-23)
										1
									   232
									  34543
									 4567654		
									567898765
				*/
				
/*#include<stdio.h>
int main()
{
	int i,j,sp=4,n=1;
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for (j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		sp=sp-1;
		n=n+2;
		printf("\n");
			
	}
}*/


/*Write a Program to Print 12344321 123**321 12****21 1*******1.*/
/*#include<stdio.h>
int main()
{
  int i,j,end;
  printf("\nENTER THE END :");
  scanf("%d",&end);
  for(i=end;i>=1;i--)
  {
    for(j=1;j<=end;j++)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=end;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
  return 0;
 }*/ 										    
