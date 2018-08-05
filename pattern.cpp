/*Day 1: Q.3> Write a C++ Program using class Pattern that will display the following Pattern:
                                  *
                                * * *
                              * * * * *
                            * * * * * * *
*/

#include<iostream>
using namespace std;

class Pattern
{
  private:
    int row;
  public:
    void getN();
    void displayPattern();
};
void Pattern::getN()
{
  cout<<"Enter the Number of Rows: ";
  cin>>row;
}
void Pattern::displayPattern() {
  for(int i=0; i<row; i++){
    for(int j=0; j<row-i; j++){
      cout<<" ";
    }
    for(int k=1; k<=(2*i)-1; k++){
      cout<<"*";
    }
    cout<<endl;
  }
}
int main() {
  Pattern obj;
  obj.getN();
  obj.displayPattern();
  return 0;
}
