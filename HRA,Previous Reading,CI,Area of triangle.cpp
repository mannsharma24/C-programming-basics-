/*#include<stdio.h>
int main()
{
	int Basic,HRA,DA,PF,gross,Net;
	printf("\nEnter the value of Basic :");
	scanf("%d",&Basic);
	printf("\nEnter the value of HRA :");
	scanf("%d",&HRA);
	printf("\nEnter the value of DA :");
	scanf("%d",&DA);
	printf("\nEnter the value of PF :");
	scanf("%d",&PF);
	gross=Basic+HRA+DA;
	Net=gross-PF;
	printf("\nThe value of Gross is %d",gross);
	printf("\nThe value of Net is %d",Net);
	return 0;
}*/





/*include<stdio.h>
int main()
{
	float Basic,HRA,DA,PF,gross,Net;
	printf("\nEnter the values :");
	scanf("%f%f%f%f",&Basic,&HRA,&DA,&PF);
	gross=Basic+HRA+DA;
	Net=gross-PF;
	printf("\nThe value of Gross is %f",gross);
	printf("\nThe value of Net is %f",Net);
	return 0;	
}*/





/*#include<stdio.h>
int main()
{
	int PR,NR,RPU,UC,Bill;
	printf("\nEnter the value of PR :");
	scanf("%d",&PR);
	printf("\nEnter the value of NR :");
	scanf("%d",&NR);
	printf("\nEnter the value of RPU :");
	scanf("%d",&RPU);
	UC=NR-PR;
	Bill=UC*RPU;
	printf("\nThe value of UC is %d",UC);
	printf("\nThe value of Bill is %d",Bill);
	return 0;
}*/




/*#include<stdio.h>
int main()
{
	int P,R,T,Amount,CI;
	printf("\nEnter the value of P :");
	scanf("%d",&P);
	printf("\nEnter the value of R :");
	scanf("%d",&R);
	printf("\nEnter the value of T :");
	scanf("%d",&T);
	Amount=P*(1+R/100)*T;
	CI=Amount-P;
	printf("\nThe value of Amount is %d",Amount);
	printf("\nThe value of Compound Interest is %d",CI);
	return 0;
}*/




/*#include<stdio.h>
#include<math.h>
int main()
{
	int P,R,T,Amount,CI;
	scanf("%d%d%d",&P,&R,&T);
	Amount=P*pow(1+R/100,T);
	CI=Amount-P;
	printf("\nThe value of Amount is %d",Amount);
	printf("\nThe value of Compound Interest is %d",CI);
	return 0;
}*/




#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	float area_triangle;
	printf("\nEnter the values of a,b,c :");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area_triangle=sqrt((s*(s-a)*(s-b)*(s-c)));
	printf("\nTHE AREA OF TRIANGLE IS %.4f",area_triangle);
	return 0;
}






