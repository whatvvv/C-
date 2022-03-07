#include<iostream>
using namespace std;
class Student
{
	public:
		void study();
		void exam();
		void setName(string name);
		void setAge(int age);
		string getName();
		int getAge();
	private:
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
void Student::setName(string name)
{
	_name=name;
}
void Student::setAge(int age)
{
	if(age<0||age>100)
	{
		cout<<"_name"<<"age is wrong"<<endl;
		_age=0;
	}
	else
	   _age=age;
}
string Student::getName()
{
	return _name;
}
int Student::getAge() 
{
	return _age;
}
int main()
{
	Student stu;
	stu.setName("zhangsan");
	stu.setAge(-20);
	cout<<stu.getName() <<stu.getAge() <<"sui"<<endl;
	stu.study();
	stu.exam();
	Student stu1;
	stu1.setName("lisi");
	stu1.setAge(22);
	cout<<stu.getName()<<stu.getAge() <<"sui"<<endl;
	stu1.study() ;
	stu1.exam() ;
	return 0; 
}
