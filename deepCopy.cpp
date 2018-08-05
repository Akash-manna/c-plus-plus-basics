/*Day 2: Q.2>
* Write a C++ Program to illustrate deep copying approach.
* Create a class Student which has two integer pointer type data members and also contains three constructors [Default, parameterized, copy constructor] to initialize the object.
* Finally display the data members through display() to print the Roll Number and Age of the Student.
*/

#include<iostream>
using namespace std;

class Student
{
  int *roll_number;
  int *age;
  public:
    Student(){}
    Student(int r, int a)
    {
      roll_number = new int;
      age = new int;
      *roll_number = r;
      *age = a;
    }
    Student(Student &stud)
    {
      roll_number = new int;
      age = new int;
      *roll_number = *stud.roll_number;
      *age = *stud.age;
    }
    void display()
    {
      cout<<endl<<"Roll Number = "<<*roll_number;
      cout<<endl<<"Age = "<<*age;
    }
};
int main()
{
  Student ram(1200, 9);
  Student mohan(ram);
  Student ramesh = ram;
  ram.display();
  mohan.display();
  ramesh.display();
  return 0;
}
