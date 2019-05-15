#include <stdio.h>

//function declaration
void choice(int *a, int n);
void output(int *a);

int main()
{
	int a[10] = { 2,4,9,1,4,5,6,0,8,3 };
	choice(a, 10);
	output(a);
	return 0;
}

//function definition
void choice(int *a, int n)
{
	int i, j, temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void output(int *a)
{
	int i;
	for (i=0;i<10;i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}