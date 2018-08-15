/*Day 7:Q.2>
* Write a C++ Program which will create a class Template for vector scalar product.
*/

#include<iostream>
using namespace std;
template <class T>
class Vector
{
    int size;
    T *v;
    public:
        Vector(int m)
        {
            size = m;
            v = new T[size];
            for(int i=0;i<size;i++)
            {
                v[i] = 0;
            }
        }
        void operator=(T *a)
        {
            for(int i=0;i<size;i++)
            {
                v[i] =  a[i];
            }
        }
        T operator*(Vector &v2)
        {
            T sum = 0;
            for(int i=0;i<size;i++)
            {
                sum+=this->v[i]*v2.v[i];
            }
            return sum;
        }
};

int main()
{
    int x1[3] = {1,2,3};
    int x2[3] = {4,5,6};
    float y1[3] = {1.1,2.2,3.3};
    float y2[3] = {4.4,5.5,6.6};
    Vector<float> v1(3);
    Vector<float> v2(3);
    Vector<int> v3(3);
    Vector<int> v4(3);
    v1 = y1;
    v2 = y2;
    v3 = x1;
    v4 = x2;
    float R1 = v1*v2;
    cout<<"R1 = "<<R1<<endl;
    int R2 = v3*v4;
    cout<<"R2 = "<<R2<<endl;
    return 0;
}
