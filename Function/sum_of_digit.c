#include <stdio.h>
#include <conio.h>
int sum(int);
int main()
{
	int digit;
	printf("Enter the digit");
	scanf("%d",&digit);
	int summ=sum(digit);
	printf("The sum of digit is %d",summ);
}
int sum(int num)
{
	int digit;
	int sum_digit;
	while(num!=0)
	{
		digit=num%10;
		sum_digit+=digit;
		num=num/10;
	}
	return sum_digit;
}
