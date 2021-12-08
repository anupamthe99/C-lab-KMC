#include <stdio.h>
#include <conio.h>
void check_palim(int);
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	check_palim(num);
	getch();
	return 0;
}
void check_palim(int num)
{
	int rev,n;
	int num_rev=num;
	while(num!=0)
	{
		n=num%10;
		rev=rev*10+n;
		num=num/10;
	}
	if (num_rev==rev)
	{
		printf("It is a palindrome number .");
	}
	else{
		printf("It is not a palindrome number .");
	}
}
