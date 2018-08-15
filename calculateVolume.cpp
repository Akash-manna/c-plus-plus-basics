/*Day 4: Q.3>
* Write a C++ program which will create a class Overload that contains those overloaded functions calculateVolume()
* for calculating volume for a Cone, 3D Box. From main(), call three versions with user given argument.
*/

#include <iostream>
using namespace std;

class Overload
{
  public:
    void CalVol(double r, double h)
    {
      cout<<"Volume of Cone = "<<(1/3)*3.14*r*r*h<<endl;
    }
    void CalVol(double r)
    {
      cout<<"Volume of Sphere = "<<(4/3)*3.14*r*r*r<<endl;
    }
    void CalVol(double l, double b, double h)
    {
      cout<<"Volume of 3D Box = "<<l*b*h<<endl;
    }
};

int main()
{
  Overload Cone, Sphere, Box;
  Cone.CalVol(4,5);
  Sphere.CalVol(5);
  Box.CalVol(4,5,6);
  return 0;
}
