#include<stdio.h>
int main()
{
	int a[50];
	int MAX,MIN;
	int i,n;
	int j=0;
	int k=0;
	printf("please input the size of array:\n");
	scanf("%d",&n);
	printf("input the elements of array one by one:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	MIN=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<MIN)
		{
			MIN=a[i];
			j=i+1;
		}
	}
	MAX=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>MAX)
		{
			MAX=a[i];
			k=i+1;
		}
	}
	printf("The position of the MIN is:%d\n",j);
	printf("The MIN is:%d\n",MIN);
	printf("The position of the MAX is:%d\n",k);
	printf("The MAX is:%d\n",MAX);
	return 0;
}
