/* Day 6:Q.1>
 * Write a C++ Program which will create a class M which contain a public method display() to all even numbers between 1 and 50.
 * Define another class N which also contain a public method display() to display odd numbers.
 * Finally, define a class P which is derived from M and N and contain a method display to show all prime numbers between 1 and 100.
 * Create an object of class P to call these three display() methods.
 */

#include<iostream>
using namespace std;
class M
{
	public:
		void display()
		{
			cout<<"Even Numbers between 1 and 50"<<endl;
			for(int i=1;i<=50;i++)
			{
				if(i%2==0){
					cout<<i<<" ";
				}
			//	cout<<endl;
			}
			cout<<endl;
		}
};

class N
{
	public:
		void display()
		{
			cout<<"Odd Numbers between 1 and 50"<<endl;
			for(int i=1;i<=50;i++)
			{
				if(i%2!=0){
					cout<<i<<" ";
				}
			//	cout<<endl;
			}
			cout<<endl;
		}
};

class P:public M,public N
{
	public:
		void display()
		{
			int flag=0;
			cout<<"Prime Numbers between 1 to 100:"<<endl;
			for(int i=1;i<=100;i++)
			{
				
				for(int j=2;j<i;j++)
				{
					if(i%j==0){
						flag=1;
						break;
					}
					else{
						flag=0;
					}

				}
				if(flag==0){
					cout<<i<<" ";
				}
			}
			cout<<endl;
		}
};
int main()
{
	P objP;
	objP.display();
	objP.M::display();
	objP.N::display();
	return 0;
}

