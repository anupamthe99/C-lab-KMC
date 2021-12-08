#include <stdio.h>
#include <conio.h>
int reverse(int);
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	printf("The reverse number is %d",reverse(num));
}
int reverse(int num)
{
	int a,rev;
	while(num!=0)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
		
	}
	return rev;
}
