/*#include<stdio.h>
#include<malloc.h>
int sumarr(int*,int);

int main()
{
    int *a,i,n,s;
    printf("\nEnter the value of n :");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\nEnter %d no :",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    s=sumarr(a,n);
    printf("\nSum is %d.",s);
    return 0;
}
int sumarr(int *x,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+*(x+i);
    }
    return sum;
}
*/


///Ques~Word wise Rotation :
//e.g~ My name is
//O/P~ yM eman si
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],temp;
    printf("Enter String: ");
    gets(str);
    printf("Entered string is: %s\n",str);
    int start=0,end=strlen(str)-1;

    // Start variable points at the start of the string
    // End Variables points at the last index of the string
    while(start<end)
    {
        //Swapping characters at start and end
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;

        //Incrementing start and decrementing end
        start++;
        end--;
    }
    printf("Reversed string is: %s",str);

    return 0;
}
*/

//-------------------------------------------------------~Functions And Strings~----------------------------------------------------------------//

//Ques~
/*#include<stdio.h>
int length(char *);
int main()
{
    int i;
    char l,a[20];
    printf("\nEnter any string : ");
    gets(a);
    l=length(a);
    printf("\nLength is %d.",l);
}
int length(int *s)
{
    int i;
    for (i=0;s[i]!='\0';i++)
    //for (i=0;*(s+i)!='\0';i++);
    return i;
}*/

///Ques~Structures and Pointers :--------------------------->
/*#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
};
int main()
{
    struct student s,*spt=&s;
   /* printf("\nEnter roll no and name : ");
    scanf("%d%s",&s.rollno,s.name);
    printf("\nRoll no :%d",s.rollno);
    printf("\nName : %s",s.name);

///WAYS--->

    printf("\nEnter roll no and name : ");
    scanf("%d%s",&spt->rollno,spt->name);
    printf("\nRoll no :%d",spt->rollno);
    printf("\nName : %s",spt->name);
    return 0;
}*/


////Ques~Dyanamic Structure
/*#include<stdio.h>
#include<malloc.h>
struct student
{
    int rollno;
    char name[20];
};
int main()
{
    struct student *sptr;
    sptr=(struct student *)malloc(sizeof(struct student));
    printf("\nEnter roll no and name : ");
    scanf("%d%s",&sptr->rollno,sptr->name);
    printf("\nRoll no :%d",sptr->rollno);
    printf("\nName : %s",sptr->name);
    return 0;
}*/


/*-----------------------------------------------Pointer to Pointer----------------------------------------------------------------*/
//Ques~
#include<stdio.h>
int main()
{
    int i=10;*iptr=&i,**iptr=&iptr;
    printf("\n%d%d%d",i,*iptr,**iptr);   //10 10 10
    printf("\n%d%d%d",&i,iptr,*ptr);     //101 101 101
    printf("\n%d%d%d",&iptr,ptr,&ptr);   //103 103 107
}
