/*Day 4: Q.2>
* Write a C++ program which will create a class MyArray which contains method to create an dynamic array of size(user given) and also the class MyArray supports the methods:
* 1> getElement()
* 2> displayArray()
* 3> sortArray()
* 4> searchArray()
* 5> destructor()
* 6> constructor()
*/

#include <iostream>
using namespace std;

class MyArray
{
  int size, key;
  int *arr;
  public:
    MyArray(int n)
    {
      size = n;
      key = key;
      arr = new int[size];
    }
    void getElement()
    {
      cout<<"Enter the Array Elements:"<<endl;
      for(int i=0;i<size;i++)
      {
        cout<<"A["<<i+1<<"]: ";
        cin>>arr[i];
      }
    }
    void displayArray()
    {
      for(int i=0;i<size;i++)
      {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    void sortArray()
    {
      for(int i=0;i<size;i++)
      {
        for(int j=i+1;j<size;j++)
        {
          if(arr[i]>arr[j])
          {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
      }
    }
    void searchArray()
    {
      int i, key, flag = 0;
      cout<<"Enter the Key: ";
      cin>>key;
      for(i=0;i<size;i++)
      {
        if(arr[i]==key)
        {
          flag=1;
          break;
        }
      }
      if(flag==1){
        cout<<"Element is Found in "<<i+1<<"th Position of the Array"<<endl;
      }
      else{
        cout<<"Element is NOT found"<<endl;
      }
    }
    ~MyArray()
    {
      delete arr;
    }
};

int main()
{
  int n;
  cout<<"Enter the Number of Elements: ";
  cin>>n;
  MyArray obj(n);
  obj.getElement();
  cout<<"The Array Elements are:"<<endl;
  obj.displayArray();
  obj.sortArray();
  cout<<"The Array Elements After Sorting:"<<endl;
  obj.displayArray();
  obj.searchArray();
  return 0;
}
