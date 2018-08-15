/*Day 7: Q.3>
* Write a C++ Program which will design a class Student which contains 3 member variables: name, roll and marks and two member functions  inputData() and displayData().
* Open a file "student.txt" for both reading and writing mode. Write 3 student objects into the file and read those objects later on. [use read() and write()]
*/

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class Student
{
    char name[10];
    int roll;
    int marks;
    public:
        void inputData();
        void displayData();
};
void Student::inputData()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll: ";
    cin>>roll;
    cout<<"Enter marks: ";
    cin>>marks;
}
void Student::displayData()
{
    cout<<setw(10)<<name<<setw(10)<<roll<<setw(10)<<marks<<endl;
}
int main()
{
    Student st1[3], st2[3];
    fstream file;
    file.open("Student.txt",ios::in|ios::out);
    cout<<"Enter detail for 3 students:"<<endl;
    for(int i=0;i<3;i++)
    {
        st1[i].inputData();
        file.write((char*)&st1[i],sizeof(st1[i]));
    }
    file.seekg(0);
    cout<<"Output:"<<endl;
    for(int i=0;i<3;i++)
    {
        file.read((char*)&st2[i],sizeof(st2[i]));
    }
    file.close();
    return 0;

}
