/*Day 2: Q.3>
* Write a C++ program which will create a class String that contains a default constructor,
* a parameterized constructor which accepts a String as argument and also contains join() and display() methods to join two Strings and print the result respectively.
*/

#include <iostream>
#include <string.h>
using namespace std;

class String
{
  char *ptr;
  int len;
  public:
    String()
    {
      len = 0;
    }
    String (char *s)
    {
      len = strlen(s);
      ptr = new char[++len];
      strcpy(ptr,s);
    }
    void join(String &S1, String &S2)
    {
      len = S1.len + S2.len;
      ptr = new char[++len];
      strcpy(ptr, S1.ptr);
      strcpy(ptr, S2.ptr);
    }
    void display()
    {
      cout<<"Full Name: "<<ptr<<" Name Length: "<<len<<endl;
    }
};
int main()
{
  String S1("Akash");
  String S2("Manna");
  String S3;
  S3.join(S1,S2);
  S3.display();
  return 0;
}
