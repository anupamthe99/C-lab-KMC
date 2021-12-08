// fibbonaci series 

#include <stdio.h>
#include <conio.h>
void fibbonaci(int);
int main()
{
	int term;
	printf("Enter the number of term of fibbonci series :");
	scanf("%d",&term);
	fibbonaci(term);
}
void fibbonaci(int num)
{
	int term=1;
	int num1=0,num2=1,nextterm=num1+num2;
	printf("%d ,%d ,",num1,num2);
	int sum=0;
	while(term<=(num-2))
	{
		num1=num2;
		num2=nextterm;
		printf("%d ,",nextterm);
		nextterm=num1+num2;
		term++;
	}
}
//sum=0+1=1
//1
//2+1=3
//term=3
