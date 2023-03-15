///Ques-BUBBLE SORT
/*
#include<stdio.h>
int main()
{
	int a[5]={5,4,3,2,1},i,j,temp;
	int n=5;
	for (i=1;i<n;i++)
	{	
		for (j=0;j<n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted Array is : ");
	for (i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/



///Ques-Merging of 2 array
/*#include<stdio.h>
int main()
{
    int a[4]={2,4,10,12},b[4]={1,3,15,20},c[8],i,j,k,p;
    i=0;
    j=0;
    k=0;
    while(i<4 && j<4)
    {
        if (a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;

    }
    if(i==4)
    {
        for(p=j;p<4;p++)
        {
            c[k]=b[p];
            k++;

        }

    }
    else
    {
        for(p=i;p<4;p++)
        {
            c[k]=a[p];
            k++;

        }

    }
    printf("Merged array is:");
    for (k=0;k<8;k++)
    {
        printf("%d ",c[k]);
    }
    return 0;

}*/


///Ques-Mixing of 2 Array:

#include<stdio.h>
int main()
{
	int a[4]={2,4,10,12},b[4]={1,3,15,20},c[8],i,k;
	i=0;
	for (k=0;k<8;k+=2)
	{
		c[k]=a[i];
		c[k+1]=b[i];
		i++;
	}
	return 0;
}
	

