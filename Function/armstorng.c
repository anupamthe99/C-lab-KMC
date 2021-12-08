#include <stdio.h>
#include <conio.h>
void check_armstrong(int);
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	check_armstrong(num);
}
void check_armstrong(int num)
{
	int a,check;
	int arm=num;
	while(num!=0)
	{
		a=num%10;
		check=check+a*a*a;
		num=num/10;
	}
	if (arm==check)
	{
		printf("It is a armstrong number .");
	}
	else
	{
		printf("It is not a armstrong number .");
	}
}
