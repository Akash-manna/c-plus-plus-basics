/* Day 2: Q.1>
*  Write a C++ Program to create a class Complex which contains 2 constructors.
*  1) One is Default.
*  2) Another is parameterized which takes two integers to initialize the object.
*  The Class also contains other two methods addComplex() to add two Complex numbers and display() to print the Complex numbers and display() to print the Complex Number.
*/

#include<iostream>
using namespace std;

class Complex
{
  int real, img;
  public:
    Complex(){}
    Complex(int r, int i)
    {
      real = r;
      img = i;
    }
    void addComplex(Complex C1, Complex C2)
    {
      real = C1.real + C2.real;
      img = C1.img + C2.img;
    }
    void display(Complex C1, Complex C2)
    {
      cout<<"The Sum of "<<C1.real<<" + "<<C1.img<<"i and "<<C2.real<<" + "<<C2.img<<"i is:"<<endl;
      cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(int argc, char const *argv[]) {
  int r, i;
  cout<<"Enter the real Part of the First Number: ";
  cin>>r;
  cout<<"Enter the imaginary Part of the First Number: ";
  cin>>i;
  Complex C1(r,i);
  cout<<"Enter the real Part of the Second Number: ";
  cin>>r;
  cout<<"Enter the imaginary Part of the Second Number: ";
  cin>>i;
  Complex C2(r,i);
  Complex C3;
  C3.addComplex(C1,C2);
  C3.display(C1,C2);
  return 0;
}
