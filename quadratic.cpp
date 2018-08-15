/*Day 5: Q.1>
* Write a C++ program to create a function template for function roots() which calculate the roots of a quadratic for integer and float coefficient.
*/

#include <iostream>
//#include <iomainip>
#include <cmath>
using namespace std;
template <class T>
void roots(T a, T b, T c)
{
  T d = b*b-4*a*c;
  if(d == 0){
    cout<<"R1 = R2 = "<<-b/(2*a)<<endl;
  }
  else if(d>0){
    cout<<"Roots are real"<<endl;
    double R = sqrt(d);
    double R1 = (-b+R)/(2*a);
    double R2 = (-b-R)/(2*a);
    cout<<"R1 = "<<R1<<endl;
    cout<<"R2 = "<<R2<<endl;
  }
  else{
    cout<<"Roots are Complex"<<endl;
    double R1 = -b/(2*a);
    double R2 = sqrt(-d)/(2*a);
    cout<<"Real Part = "<<R1<<endl;
    cout<<"Imaginary Part = "<<R2<<endl;
  }
}

int main()
{
  cout<<"Integer coefficient"<<endl;
  roots(1,-5,6);
  cout << "Float Coefficient" <<endl;
  roots(1.5,3.6,5.0);
  return 0;
}
