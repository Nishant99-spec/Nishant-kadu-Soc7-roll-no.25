#include<iostream>
using namespace std;
class Calculator
{
public:
	int add(int a,int b)
	{
		return a+b;
	}
	int add(int a,int b,int c)
	{
		return a+b+c;
	}
	int sub(int a,int b)
	{
		return a-b;
	}
	int sub(int a,int b,int c)
	{
		return a-b-c;
	}
};

int main(){
	Calculator calc;
	int a=5,b=7,c=9;
		cout<<calc.add(a,b)<<endl;
		cout<<calc.add(a,b,c)<<endl;
		cout<<calc.sub(a,b)<<endl;
		cout<<calc.sub(a,b,c)<<endl;
	return 0;
	}


