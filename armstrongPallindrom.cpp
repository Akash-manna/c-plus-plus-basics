/*Day 1: Q.2>
* Write a C++ Program that will create two Class member functions to check whether a given number is Armstrong or Pallindrom
*        Example of Armstrong Number:  153 = 1^3 + 5^3 + 3^3
*        Example of Pallindrom Number: 121, 2332,...
*/

#include<iostream>
using namespace std;

class Number
{
  private:
    int number;
  public:
    void getN();
    void checkArmstrong();
    void checkPallindrom();
};

void Number::getN()
{
  cout<<"Enter a Number: ";
  cin>>number;
}
void Number::checkArmstrong()
{
  int n, sum=0, d=0;
  n = number;
  while(n>0){
    d = n%10;
    sum = sum+(d*d*d);
    n = n/10;
  }
  if(sum==number){
    cout<<number<<" is an Armstrong Number!"<<endl;
  }
  else{
    cout<<number<<" is NOT an Armstrong number"<<endl;
  }
}
void Number::checkPallindrom() {
  int n, rev =0, d;
  n = number;
  while(n>0){
    d = n%10;
    rev = rev*10+d;
    n = n/10;
  }
  if (rev==number) {
    cout <<number<<" is a Pallindrom" <<endl;
  }
  else{
    cout<<number<<" is NOT a Pallindrom"<<endl;
  }
}
int main() {
  Number obj;
  obj.getN();
  obj.checkArmstrong();
  obj.checkPallindrom();
  return 0;
}
