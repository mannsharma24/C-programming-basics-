///Ques-Book details with 5 enteries
/*#include<stdio.h>
struct book_details
{
    int bcode;
    char bname[20];
    float rate;
    int qoh;
};
typedef struct book_details book;
int main()
{
    book b[5];
    int i,tot=0;
    printf("\nEnter 5 book details : ");
    for (i=0;i<5;i++)
    {
        printf("\nEnter bcode,bname,rate,qoh :");
        scanf("%d %s %f %d",&b[i].bcode,b[i].bname,&b[i].rate,&b[i].qoh);
        tot=tot+b[i].qoh;
    }
    printf("\nBook details : ");
    for (i=0;i<5;i++)
    {
        printf("\n%d %s %f %d",b[i].bcode,b[i].bname,b[i].rate,b[i].qoh);
    } 
    printf("\nTotal Books in Shop are : %d",tot);
    return 0;
}*/


////Ques-Structure & Function :--
struct employee
{
	int ecode;
	char ename[20];
	float salary;
};
typedef struct employee emp;
emp getdata();
void putdata(emp);
emp increment(emp);
int main()
{
	emp a;
	a=getdata();
	putdata(a);
	a=increment(a);
	putdata(a);
	return 0;
}
emp getdata()
{
	emp x;
	printf("\nEnter ecode,ename,salary : ");
	scanf("%d %s %f",&x.ecode,x.ename,&x.salary);
	return x;
}
emp putdata(emp y)
{
	printf("\nEcode : %d",y.ecode);
	printf("\nEname : %d",y.ename);
	printf("\nSalary : %f",y.salary);
}
emp increment(emp z)
{
	z.salary=z.salary+1000;
	return z;
}
