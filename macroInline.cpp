/* Day 5: Q.3>
 * Define a macro Cube1(a) in C++ and call it from main() with long and integer argument.
 * Define an inline function long Cube2(long a) which also does the same thing.
 * Call also this function from main().
 */

#include<iostream>
using namespace std;
#define Cube1(a) a*a*a
inline long Cube2(long a)
{
	return a*a*a;
}
int main()
{
	long x;
	cout<<"Enter a Number: ";
	cin>>x;
	cout<<"Macro: "<<Cube1(x)<<endl;
	cout<<"Inline: "<<Cube2(x)<<endl;
	return 0;
}

