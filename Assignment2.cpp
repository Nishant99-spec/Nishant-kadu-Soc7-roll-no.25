#include<iostream>
using namespace std;

class Rectangle
{
	private:
	float length,breadth;
	
public:
	void getData()
	{
		cout<<"Enter the Length : ";
		cin>>length;
		cout<<"Enter the Breadth : ";
		cin>>breadth;
	}

	float area();
	float perimeter();

	void Display()
	{
		cout<<"The Area of Reactangle is : "<<area()<<"\n";
		cout<<"The Perimeter of Rectangle is : "<<perimeter()<<"\n";
	}
};

float Rectangle::area()
{
	return length*breadth;
}

float Rectangle::perimeter()
{
	return 2*(length+breadth);
}

int main()
{
	Rectangle r;
	r.getData();
	r.Display();
return 0;

}