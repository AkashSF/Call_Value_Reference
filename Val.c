#include<stdio.h>
void swap(int x, int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("After swapping (within function)\na=%d b=%d\n", x, y);
}
int main()
{
	int a, b;
	printf("Enter two nos. (a & b): \n");
	scanf("%d%d", &a, &b);
	swap(a,b);
	printf("After swapping (within main)\na=%d b=%d\n", a, b);
}
