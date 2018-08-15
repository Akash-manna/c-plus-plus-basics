/*Day 5: Q.2>
* Write a main() function which will declare a double variable f. Assign 10.056734 to f.
* 1> Use a Stream manipulator to display in 5 digits.
* 2> Print this double number (f) in scientific notation using flags in ios class.
* 3> Print this double number (f) in fixed notation and show the positive sign in front of it using flags in ios class.
* 4> Display an integer (i = 7612) in hexadecimal using ios flags.
*/

#include<iostream>
using namespace std;

int main()
{
  float a = 10.056734;
  cout<<a<<endl;
  cout.setf(ios::scientific);
  cout<<a<<endl;
  cout.setf(ios::showpos);
  cout<<a<<endl;
  int i = 7612;
  cout.setf(ios::hex);
  cout<<hex<<i<<endl;
  return 0;
}
