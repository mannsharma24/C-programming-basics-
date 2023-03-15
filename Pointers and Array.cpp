/*#include<stdio.h>
int main()
{
	int a[5]={2,4,6,8,10};
	printf("\n%d",a);
	return 0;
}*/


//Ques-Sum of array elements by using pointer :~
///Ans-->
/*
#include<stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    printf("\nEnter the %d no :",n);
    for (i=0;i<n;i++)
    {
//        scanf("%d",&a[i]);
        scanf("%d",a+i);

//        sum=sum+a[i];
        sum=sum+*(a+i);
    }
    printf("\nSum is %d",sum);
    return 0;
}
*/


/*-----------------------------------Dyamic memory allocation-----------------------------------------------------------------*/
/*
#include<stdio.h>
int *a;
(int *)malloc(n*sizeof(int));
*/


//Ques-Sum of array elements by using pointer :~
///Ans-->

/*
#include<stdio.h>
#include<malloc.h>

int main()
{
    int *a,i,n,sum=0;
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the %d no :",n);
    for (i=0;i<n;i++)
    {
//        scanf("%d",&a[i]);
        scanf("%d",a+i);

//        sum=sum+a[i];
        sum=sum+*(a+i);
    }
    printf("\nSum is %d",sum);
    free(a);
    return 0;
}*/

