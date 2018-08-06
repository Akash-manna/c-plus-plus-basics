/*Day 3: Q.2>
* Write a C++ Program which will overload the unary operator '++' [both prefix and postfix].
* From main() method, create necessary objects of the class Student and make necessary member function call to demonstrate this.
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
    Student(int r, int ag)
    {
      roll = r;
      age = ag;
    }
    Student operator++()  //This is for the prefix operation.
    {
      roll = roll+1;
      age = age+1;
      return *this; //The this pointer is an implicit parameter to all member functions.
    }
    Student operator++(int i) //The parameter i is used to differ this postfix operation from the above-written prefix operation.
    {
      Student temp;
      temp.roll = roll;
      temp.age = age;
      roll = roll+1;
      age = age+1;
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
  Student temp;
  Student ramesh(1200,19);
  temp = ramesh++;
  ramesh.display();
  temp.display();
  temp = ++ramesh;
  ramesh.display();
  temp.display();
  return 0;
}
