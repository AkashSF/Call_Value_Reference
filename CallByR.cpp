#include<stdio.h>
void swap(int *x, int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int x, y;
	printf("Enter value of 1st no. (x): ");
	scanf("%d", &x);
	printf("Enter value of 2nd no. (y): ");
	scanf("%d", &y);
	printf("Initial value of x: %d\n", x);
	printf("Initial value of y: %d\n", y);
	swap(&x, &y);
	printf("Value of x after swapping: %d\n", x);
	printf("Value of y after swapping: %d", y);
}

