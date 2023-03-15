////Ques-5 Cities :-
/*#include<stdio.h>
int main()
{
    char a[5][20];
    int i,j;
    printf("\nEnter 5 Cities : ");
    for (i=0;i<5;i++)
    {
        gets(a[i]);
    }
    printf("\nCities are : ");
    for (i=0;i<5;i++)
    {
        printf("%s ",a[i]);
    }
    return 0;
}*/

////Ques-
/*nclude<stdio.h>
#include<string.h>
int main()
{
    char a[5][20],temp;
    int i,j;
    printf("\nEnter 5 Cities : ");
    for (i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for (i=1;i<=5;i++)
    {
        for (j=0;j<5-i;j++)
        {
            if (strcmp(a[j],a[j+1])>0)
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    printf("\nCities are : ");
    for (i=0;i<5;i++)
    {
        printf("%s ",a[i]);
    }
    return 0;
}*/

////Ques-
/*#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float fee;
};
int main()
{
    struct student s;
    printf("\nEnter Roll no.,Name,Fee : ");
    scanf("%d %s %f",&s.rollno,&s.name,&s.fee);
    printf("\nRoll no is : %d",s.rollno);
    printf("\nName is : %s",s.name);
    printf("\nFee is : %f",s.fee);
}*/


////Ques-
/*#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float fee;
}s;
int main()
{
    struct student p={1001,"Ram",2500.0};
    s=p;
    printf("\nRoll no is : %d",s.rollno);
    printf("\nName is : %s",s.name);
    printf("\nFee is : %f",s.fee);
    return 0;
}*/

////Ques-
struct date
{

    int dd;
    int mm;
    int yy;

};
struct student
{
    int rollno;
    char name[20];
    struct date dob;
};
int main()
{
    struct student s;
    printf("\nEnter Roll no.,Name,DOB(DD-MM-YY) : ");
    scanf("%d %s %d %d %d",&s.rollno,s.name,&s.dob.dd,&s.dob.mm,&s.dob.yy);
    printf("\nRoll no is : %d",s.rollno);
    printf("\nName is : %s",s.name);
    printf("\nDOB : (%d-%d-%d)",s.dob.dd,s.dob.mm,s.dob.yy);
    return 0;
}
