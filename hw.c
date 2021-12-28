#include<stdio.h>
#include"calculations.h"
int main()
{
	int var1,var2,res;
	char oper;

	printf("Hello world\n");
	printf("Enter the arguments :");
	scanf("%d\n %d",&var1,&var2);
	printf("what operation:");
	scanf("\n%c",&oper);
	printf("Hello world\n");
	res= calc(var1,var2,oper);
	printf("result of %c operation on %d and %d is %d\n ",oper,var1,var2,res);
return 0;
}
