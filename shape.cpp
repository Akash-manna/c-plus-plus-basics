/*Day 4: Q.1>
* Write a C++ program which will create an abstract class Shape which contains pure virtual function area().
* Define four derived classes Circle, Triangle, Rectangle, Square which override the method area().
* Now from the main() method, create object of derived classes and call the corresponding area() method.
*/

#include <iostream>
using namespace std;

//The Shape class
class Shape
{
  public:
    virtual void area() = 0;
};

class Circle:public Shape
{
  private:
    double radius;
  public:
    Circle(double r)
    {
      radius = r;
    }
    void area()
    {
      double ar;
      ar = 3.14*radius*radius;
      cout<<"The Area of the Circle with radius "<<radius<<" is "<<ar<<endl;
    }
};

class Triangle:public Shape
{
  private:
    double height, base;
  public:
    Triangle(double h, double b)
    {
      height = h;
      base = b;
    }
    void area()
    {
      double ar;
      ar = 0.5*height*base;
      cout<<"The Area of the Triangle with height "<<height<<" and base "<<base<<" is "<<ar<<endl;
    }
};

class Rectangle:public Shape
{
  private:
    double length, base;
  public:
    Rectangle(double len, double bs)
    {
      length = len;
      base = bs;
    }
    void area()
    {
      double ar;
      ar = length*base;
      cout<<"The Area of the Rectangle with Length "<<length<<" and base "<<base<<" is "<<ar<<endl;
    }
};

class Square:public Shape
{
  private:
    double side;
  public:
    Square(double s)
    {
      side = s;
    }
    void area()
    {
      double ar;
      ar = side*side;
      cout<<"The Area of The Square with side "<<side<<" is "<<ar<<endl;
    }
};

int main()
{
  Shape *s[4];
  Circle c(5);
  Triangle t(5,4);
  Rectangle rec(6,4);
  Square sq(4);
  s[0] = &c;
  s[1] = &t;
  s[2] = &rec;
  s[3] = &sq;
  for(int i = 0; i<4;i++)
  {
    s[i]->area();
  }
  return 0;
}
