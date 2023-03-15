///Ques-1)-Copying an Array :
/*#include <stdio.h>  
int main()
{
    int a[5] = { 3, 6, 9, 2, 5 }, n = 5;
    int b[n], i;
    // copying elements from one array to another
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    // displaying first array before
    // copy the elements from
    // one array to other
    printf("The first array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    // displaying array after copy
    // the elements from one
    // array to other
    printf("\nThe second array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}*/


///Ques-2)-Concationation of 2 Array 
										//1-st method
/*#include<stdio.h>
int main()
{
	int a[4]={1,3,5,7},b[4]={2,4,6,8},i,j,c[2];
	for(i=0;i<4;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<4;j++)
	{
		c[i]=b[j];                                //Note we can also use c[i+j]=b[j] instead to write i++(Discuss in 2-way)
		i++;
	}
	for(i=0;i<8;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}*/

									    //2-nd method
//#include<stdio.h>
//int main()
//{
//	int a[100],b[100],c[200],n1,n2,i,j,z,n3;
//	printf("\nEnter Array 1. size : ");
//	scanf("%d",&n1);
//	for  (i=0;i<n1;i++)
//	{
//			scanf("%d",&a[i]);
//	}
//	printf("\nEnter Array 2. size : ");
//	scanf("%d",&n2);
//	for(j=0;j<n2;j++)
//	{
//		scanf("%d",&b[j]);
//	}
//	for (i=0;i<n1;i++)
//	{
//		c[i]=a[i];
//	}
//	for (j=0;j<n2;j++)
//	{
//		c[i+j]=b[j];
//	}
//	n3=n1+n2;						////C ke elements taak jane k liyee........ a me jese 5 b me 2 element h so c m 7 but add m same hoge 
//	printf("\nConcated Array is : ");
//	for (z=0;z<n3;z++)
//	{
//		printf("%d ",c[z]);
//	}
//	return 0;
//}


//////Ques-3)-Addition of Arrays
/*#include<stdio.h>
int main()
{
	int a[100],b[100],c[200],n1,n2,i,j,z,n3;
	printf("\nEnter Array 1. size : ");
	scanf("%d",&n1);
	for  (i=0;i<n1;i++)
	{
			scanf("%d",&a[i]);
	}
	printf("\nEnter Array 2. size : ");
	scanf("%d",&n2);
	for(j=0;j<n2;j++)
	{
		scanf("%d",&b[j]);
	}
	for (i=0;i<n1;i++)
	{
		c[i]=a[i]+b[i];
	}
	n3=n1;          
	printf("\nConcated Array is : ");
	for (z=0;z<n3;z++)
	{
		printf("%d ",c[z]);
	}
	return 0;
}*/



////Ques-5)-Swapping of 2 numbers :
/*#include<stdio.h>
int main()
{
	int a[3]={10,20,30},b[3]={2,4,6},i,j,temp;
	printf("\nBEFORE SWAPPING VALUE OF A : ");
	for (i=0;i<3;i++)
		printf("%d ",a[i]);
	printf("\nBEFORE SWAPPING VALUE OF B : ");
	for (j=0;j<3;j++)
		printf("%d ",b[j]);
	for (i=0;i<3;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("\nAFTER SWAPPING VALUE OF A : ");
	for (i=0;i<3;i++)
		printf("%d ",a[i]);
	printf("\nAFTER SWAPPING VALUE OF B : ");
	for (j=0;j<3;j++)
		printf("%d ",b[j]);
	return 0;
}*/


////Ques-6)-Left Shift :
/*#include<stdio.h>
int main()
{
	int a[100],n1,i,temp,print_k_liye;
	printf("\nEnter Array 1. size : ");
	scanf("%d",&n1);								//5=n1
	for  (i=0;i<n1;i++)							   //Loop 5 ke le chleee.....	input hogye a ke array****
	{
			scanf("%d",&a[i]);							// 10 20 30 40 50
	}
	temp=a[0];										//temp=10
	for (i=0;i<(n1-1);i++)							//(5-1)=4 ke liye loop chle...	
	{
		a[i]=a[i+1];
	}
	a[n1-1]=temp;							////Jese i ki value 4 hui loop se bahar a[3]=temp
	printf("\t\tRequired Left Shift is : \n");
	for (print_k_liye=0;print_k_liye<n1;print_k_liye++)
		printf("%d ",a[print_k_liye]);
	return 0;
}*/


////Ques-9)Swap Adujcent element(Generally have elements in 2,4,6,8.....
/*#include<stdio.h>
int main()
{
	int a[6]={10,20,30,40,50,60},i,temp;
	for (i=0;i<6;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	printf("\nAdjucent Swapping is : ");
	for (i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/


////Ques-8)Reversing of an Array :
//#include<stdio.h>
//int main()
//{
//	int a[50],i,n,j,temp;
//	printf("\nEnter the value of n : ");
//	scanf("%d",&n);
//	printf("\nEnter %d no :",n);
//	for (i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	j=n-1;
//	for (i=0;i<n/2;i++)
//	{
//		temp=a[i];
//		a[i]=a[j];
//		a[j]=temp;
//		j--;
//	}
//	
//	printf("\nReversed Array :");
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	return 0;
//}
	
	
////Ques-10)-Max and min in an Array :
/*#include <stdio.h>
int main()
{
    int a[1000],i,n,min,max;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=0;i<n;i++)
	{
    	if (max<a[i])
    		max=a[i];
	}
	min=a[0];
    for (i=0;i<n;i++)
	{
    	if (min>a[i])
    		min=a[i];
	}
    printf("Maximum is : %d ",max);
    printf("\nMinimum is : %d ",min);
	return 0;
}*/

/*////Ques-product of array elem
#include <stdio.h>
int main()
{
    int a[1000],i,n,prod=1;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    prod=1;
    for (i=0;i<n;i++)
    	prod=prod*a[i];
    printf("Product of elements is : %d ",prod);
	return 0;
}*/


///Ques-4)merging of 2 array :~
/*#include<stdio.h>
int main()
{
	int a[100],b[100],c[200],n1,n2,i,j=0,z,n3;
	printf("\nEnter Array 1. size : ");
	scanf("%d",&n1);
	for  (i=0;i<n1;i++)
	{
			scanf("%d",&a[i]);
	}
	printf("\nEnter Array 2. size : ");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<n1;i++)
	{
		c[j]=a[i];
		j++;
	}
	for (i=0;i<n2;i++)
	{
		c[j]=b[i];
		j++;
	}
	n3=n1+n2;
	printf("After Merging : ");
	for (i=0;i<n3;i++)
		printf("%d ",c[i]);
	return 0;
}*/


///Ques-6)-right shift
/*#include<stdio.h>
int main()
{
	int i,n,a[100],temp;

    printf("Enter the number of elements:\n") ;
    scanf("%d",&n);
 
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    printf("Original array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    temp=a[n-1];
    for (i=n-1;i>0;i--)
    {
		a[i]=a[i-1];
	}
	a[0]=temp;
	printf("\nNew array after rotating by one postion in the right direction\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
	return 0;
}*/

																/*Basics*/
//Ques-Intersection 
/*#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},b[5]={1,20,3,4,50},i,j;
	printf("Common Elements is : ");
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
		if (a[i]==b[j])
			printf("%d ",a[i]);						///We can use b[j] also the output is same
		}
	}	
	return 0;
} */

////Ques-unique
//#include<stdio.h>
//int main()
//{
//	int a[100],n,ctr=0;
//	int i,j;
//	printf("\nBhai Array ke saare element print kr plssss.... ");
//	printf("\nkitne element dalega : ");
//    scanf("%d",&n);
//    printf("chl %d input daal .... ",n);
//    for (i=0;i<n;i++)
//    {
//    	scanf("%d",&a[i]);
//	}
//	printf("\nLe pakad unique element : ");
//    for(i=0;i<n;i++)
//    {
//		ctr=0;
//    	for (j=0;j<n;j++)
//		{
//			if (i!=j)
//				{
//					if (a[i]==a[j])
//					{
//						ctr++;
//					}
//				}	
//		}
//		if (ctr==0)
//			printf("%d ",a[i]);
//	}	
//	return 0;
//} 



//////Ques-removing Element :
//#include<stdio.h>
//int main()
//{
//	int a[100],size,posi;
//	int i,j;
//	printf("\nBhai Array ke saare element print kr plssss.... ");
//	printf("\nkitne element dalega : ");
//    scanf("%d",&size);
//    printf("chl %d input daal .... ",size);
//    for (i=0;i<size;i++)
//    {
//    	scanf("%d",&a[i]);
//	}
//	printf("konsi position se delete krne haa .. ");
//	scanf("%d",&posi);
//	if (posi<=0 || posi>size)
//		printf("Invalid-Position");
//	else
//	{
//		for(i=posi-1;i<size;i++)
//		{
//			a[i]=a[i+1];		
//		}
//		size=size-1;
//	}
//		///Print krwane hatuuu
//	printf("\nTere Array Delete hone ke baadd esi h kuch .... : ");
//	for (i=0;i<size;i++)
//		printf("%d ",a[i]);
//	return 0;
//}


//////Ques-Frequancy of Occurence :~
////////////i)------------------------only particular
//#include<stdio.h>
//int main()
//{
//	int a[100],size,i,frequancy=0,num_jo_search;
//	printf("\nBhai Array ke saare element print kr plssss.... ");
//	printf("\nkitne element dalega : ");
//    scanf("%d",&size);
//    printf("chl %d input daal .... ",size);
//    for (i=0;i<size;i++)
//    {
//    	scanf("%d",&a[i]);
//	}
//	printf("konse number ki occurence dekhni h .... ");
//	scanf("%d",&num_jo_search);
//	for (i=0;i<size;i++)
//	{
//		if (a[i]==num_jo_search)
//			frequancy++;
//	}
//	printf("\nFrequancy of %d is %d.",num_jo_search,frequancy);
//	return 0;
//}


//////Ques-Count odd and even in array ;~
/*#include<stdio.h>
int main()
{
	int a[100],size,i,even=0,odd=0;
	printf("\nBhai Array ke saare element print kr plssss.... ");
	printf("\nkitne element dalega : ");
    scanf("%d",&size);
    printf("chl %d input daal .... ",size);
    for (i=0;i<size;i++)
    {
    	scanf("%d",&a[i]);
	}
	for (i=0;i<size;i++)
	{
		if (a[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("Total Number of Even's are : %d \n Total Number of Odd's are : %d",even,odd);
	return 0;


}*/

////Ques-Second largest
#include<stdio.h>
int main()
{
    int n,i,a[10],max,sec_max;
    printf("\nEnter a number which tells number of total element : ");
    scanf("%d",&n);
    printf("\nEnter %d elements : ",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]>max)
            {
            sec_max=max;
            max=a[i];
            }
        else if (max>a[i] && a[i]>sec_max)
            sec_max=a[i];
    }
    printf("\nYour array is :");
    printf("{ ");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("}");
    printf("\nSecond maximium is : %d",sec_max);
    printf("\nMaximum  is        : %d",max);
    return 0;
}
