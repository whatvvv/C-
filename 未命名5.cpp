#include<iostream>
using namespace std;
class Student
{
	public:
		void study();
		void exam();
		string _name;
		int _age;
};
void Student::study()
{
	cout<<"learn C++"<<endl;
}
void Student::exam()
{
	cout<<"C++ score is 100"<<endl;
}
int main()
{
	Student stu;
	stu._name="zhangsan";
	stu._age=20;
	cout<<stu._name<<stu._age<<"sui"<<endl;
	stu.study();
	stu.exam();
	return 0; 
}
