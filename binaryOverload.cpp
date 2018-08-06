/*Day 3: Q.1>
* Write a C++ Program which will design a class Student to illustrate overloading of a binary operator '+'. From main(), create necessary objects to demonstrate.
*/

#include <iostream>
using namespace std;

class Student
{
  private:
    int roll;
    int age;
  public:
    Student(){}
    Student(int r,int ag)
    {
      roll=r;
      age=ag;
    }
    Student operator+(Student obj)
    {
      Student temp(0,0);
      temp.roll = roll+obj.roll;
      temp.age = age+obj.age;
      return temp;
    }
    void display()
    {
      cout<<"Roll: "<<roll<<endl;
      cout<<"Age: "<<age<<endl;
    }
};
int main()
{
  Student ram(1200,19);
  Student mohan(1201, 20);
  Student Ramesh(0,0);
  Ramesh = ram+mohan;
  Ramesh.display();
  return 0;
}
