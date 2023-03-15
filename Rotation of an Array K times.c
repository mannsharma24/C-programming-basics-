////Ques-Rotation of array k times:----
/*#include <stdio.h>
int main()
{
    int a[10000],i,n,j,k,temp;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("how many times right rotate : ");
    scanf("%d", &k);
    k=k%n;
    for(i=0; i<k; i++)
    {
        temp=a[n-1];
        for(j=n-1; j>0; j--)
        {
           a[j]=a[j-1];
		}

         a[j]=temp;

    }
    printf("\narray elements after right rotate  : ");

    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }

 }*/

 ////Ques-Sub Array :-----------------------
 #include<stdio.h>
 int main()
 {
    int arr[5]={1,2,3,4,5},n=5;
    for(i=0;i<n;i++)
     {
         int sum=0;
         for(j=i;j<n;j++)
         {
             sum=sum+arr[j];
             printf("%d",sum);
         }
     }
     return 0;
 }
