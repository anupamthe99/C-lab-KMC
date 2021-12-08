//factorial
#include <stdio.h>
#include <conio.h>
int factorila(int );
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	printf("The factorila of %d is %d ",num,factorial(num));
	getch();
	return 0;
} 
//int factorial(int num)
//{
//	int i=1;
//	int mult=1;
//	while(i<=num)
//	{
//		mult*=i;
//		i++;
//	}
//	return mult;
//}
int factorial(int num)
{
	int i;
	int mult=1;
	for(i=1;i<=num;i++)
	{
		mult*=i;
	}
	return mult;
}

