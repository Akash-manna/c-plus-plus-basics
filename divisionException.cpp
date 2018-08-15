/* Day 6:Q.2>
 * Write a C++ Program whicch will take integer input namely X,Y,Z in main().
 * If X>Y, Calculate and display the result [Z/(X-Y)].
 * If X=Y, throw an integer exception and display a message "Division by zero not possible".
 * If X<Y, throw an double  exception and display a message "Result is Negative" inside default catch.
 */

#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	try{
		cout<<"Enter the value of X: ";
		cin>>x;
		cout<<"Enter the value of Y: ";
		cin>>y;
		cout<<"Enter the value of Z: ";
		cin>>z;
		if(x>y){
			int R = z/(x-y);
			cout<<"Result is "<<R<<endl;
		}
		else if(x=y){
			throw 1;
		}
		else if(x<y){
			throw x;
		}
	}
	catch(int i){
		cout<<"EXCEPTION! Division by zero not possible\nPlease enter a valid input!"<<endl;
	}
	catch(char d){
		cout<<"EXCEPTION! Result is negative!"<<endl;
	}
	return 0;
}
