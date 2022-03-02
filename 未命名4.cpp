#include<stdio.h>
typedef struct Student
{
	int num;
	char name[20];
	int age;
	float height;
}STU;
int main()
{
	STU stu;
	scanf("%d%s%d%f",&stu.num,&stu.name,&stu.age,&stu.height);
	printf("%d %s %d %.2f\n",stu.num,stu.name,stu.age,stu.height);
	return 0;
}
