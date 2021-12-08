#include <stdio.h>
#include <conio.h>
void prime(int);
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	prime(num);
	return 0;
}
void prime(int num)
{
	int i;
	int c=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0){
			c=c+1;
		}
	}
	if(c==2)
	{
		printf("It is a prime number .");
	}
	else{
		printf("It is a composite number .");
	}
}
