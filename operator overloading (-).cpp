//WAP to overload unary operator - for the following class
//Class A has two data variables x and y of integer type in privare scope
//define a parametrized constructor to iniliase values of x and y for an object 
//overload the minus operstor to negate the values of x and y
//define the output function to display the results

#include<iostream>
using namespace std;

class A
{
	int x;
	int y;
	public:
		A(int a, int b)
		{
			x=a;
			y=b;
		}
		friend void operator -(A &ob1);
		
		void display()
		{
			cout<<"Values of x and y: "<<x<<" "<<y<<endl;
		}
};

void operator -(A &ob1)
		{
			ob1.x=-ob1.x;
			ob1.y=-ob1.y;
		}

int main()
{
	A ob(2,3);
	operator -(ob);
	ob.display();
	return 0;
}        
