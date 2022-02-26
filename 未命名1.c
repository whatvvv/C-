#include<stdio.h>
void bubblesort(int s[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				temp = s[j];
				s[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[10];
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	bubblesort(a, 10);
	printf("after sort");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}
