/* Day 5: Q.4>
 * Write a C++ program which will create a class MyStack which will create a stack of numbers.
 * Create necessary methods for class MyStack like Constructor, push(), pop(), isEmpty(), isFull(), displayStack().
 * From main(), call all methods of MyStack using necessary arguments.
 */

#include<iostream>
using namespace std;

class MyStack
{
	private:
		int top;
		int *arr;
		int size;
	public:
		MyStack(int sz)
		{
			size = sz;
			top = -1;
			arr = new int[sz];
		}
		int pop()
		{
			if(isEmpty()){
				return -999;
			}
			else{
				return arr[top--];
			}
		}
		void push(int item)
		{
			if(isFull()){
				cout<<"Stack is Full!"<<endl;
			}
			else{
				top = top+1;
				arr[top] = item;
			}
		}
		bool isEmpty()
		{
			if(top == -1){
				return true;
			}
			else{
				return false;
			}
		}
		bool isFull()
		{
			if(top == (size-1)){
				return true;
			}
			else{
				return false;
			}
		}
		void traverse()
		{
			for(int i=top;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
};

int main()
{
	int n, ch, item, el;
	cout<<"Enter the size: ";
	cin>>n;
	MyStack ob(n);
	cout<<"Enter the item: ";
	cin>>item;
	while(1)
	{
		cout<<"1) Exit"<<endl;
		cout<<"2) Push"<<endl;
		cout<<"3) Pop"<<endl;
		cout<<"4) isEmpty"<<endl;
		cout<<"5) isFull"<<endl;
		cout<<"6) Traverse"<<endl;
		cout<<"Enter the Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				exit(0);
				break;
			case 2:
				cout<<"Enter the item: ";
				cin>>item;
				ob.push(item);
				break;
			case 3:
				el = ob.pop();
				if(el == -999){
					cout<<"Stack is Empty. Pop not possible!"<<endl;
				}
				else{
					cout<<"Popped element is "<<el<<endl;
				}
				break;
			case 4:
				if(ob.isEmpty() == true){
					cout<<"Stack is Empty"<<endl;
				}
				else{
					cout<<"Stack is not Empty"<<endl;
				}
				break;
			case 5:
				if(ob.isFull() == true){
					cout<<"Stack is Full"<<endl;
				}
				else{
					cout<<"Stack is not Full"<<endl;
				}
				break;
			case 6:
				ob.traverse();
				break;
		}
	}
	return 0;
}

