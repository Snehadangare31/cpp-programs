#include<iostream>
#include<cmath>
using namespace std;
class example
{
	int a,b;
	public:
		void input(){
			cout<<"enter a and b:";
			cin>>a>>b;
		}
		void operator -() {//operator function as a member function
		a=-a;
		b=-b;
	}
			void operator +() {//operator function as a member function
		a=+a;
		b=+b;
	}
	void display(){
		cout<<"a="<<a<<endl<<"b="<<b<<endl;
	}
};
int main()
{
example e;
	e.input();
	cout<<"before overloading unary minus operator"<<endl;
	e.display();
	-e;
	cout<<"after overloading unary minus operator"<<endl;
	e.display();
	{example e;
	e.input();
	cout<<"before overloading unary plus operator"<<endl;
	e.display();
	+e;
	cout<<"after overloading unary plus operator"<<endl;
	e.display();
	}
	return 0;
}

