#include <iostream>
using namespace std;
 
class Student
{
	public:
	string name;
	int rollNumber;
	float marks;
	
	void Accept()
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter rollNumber:";
		cin>>rollNumber;
		cout<<"Enter marks:";
		cin>>marks;
	}
	
	void Result()
	{
		if(marks>=40)
		{
			cout<<"pass";
		}
		else
		{
			cout<<"fail";
		}
	}
	
	void display()
	{
		cout<<"Name is:"<<name;
		cout<<"rollNumber:"<<rollNumber;
		cout<<"marks:"<<marks;
	
		Result();
	}
};
 
int main()
{
	Student s;
	s.Accept();
	s.display();
	return 0;
}
