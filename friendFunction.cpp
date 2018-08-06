/*Day 3: Q.3>
* Write a C++ Program which willl create a friend function int sum(A obj1, B obj2) where A and B are two classes and sum() is a friend to both classes.
* From main() method, create necessary objects and make necessary member functions to produce sum.
*/

#include<iostream>
using namespace std;

class B;
class A
{
	private:
		int a;
	public:
	void getA()
	{
		cout<<"Enter the value of A: ";
		cin>>a;
	}
	friend int sum(A obj1, B obj2);
};

class B
{
	private:
		int b;
	public:
		void getB()
		{
			cout<<"Enter the value of B: ";
			cin>>b;
		}
		friend int sum(A obj1, B obj2);
};

int sum(A obj1, B obj2)
{
	int res;
	res = obj1.a+obj2.b;
	return res;
}

int main()
{
	int s;
	A obj1;
	B obj2;
	obj1.getA();
	obj2.getB();
	s = sum(obj1, obj2);
	cout<<"Sum: "<<s;
	return 0;
}

