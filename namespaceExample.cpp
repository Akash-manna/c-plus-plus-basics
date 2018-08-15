/*Day 7: Q.1>
* Write a C++ Program which will create a class Test inside a namespace Nm. Class Test contains a method display() which display a member variable m.
* From main(), create two objects of the class [One using scope resolution and other "using directive"] and call the display() method.
*/

#include<iostream>
using namespace std;


namespace Nm
{
   
   class Test
   {
        private:
            int m;
        public:
            Test(int a)
            {
                m = a;
            }
            void display()
            {
                cout<<"M = "<<m<<endl;
            }
   };
}

int main()
{
    Nm::Test t1(200);
    t1.display();
    using namespace Nm;
    Test t2(400);
    t2.display();
    return 0;
}