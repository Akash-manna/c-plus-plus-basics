/*Day 1:Q.1> Write a C++ Program that will generate a fibonacci series upto nth terms as shown below:
*           0  1  1  2  3  5  8... [t(n)=t(n-1)+t(n-2)]
*/

#include<iostream>
using namespace std;
int main()
{
  int n, t1=0, t2=1, nt=0;
  cout<<"Enter the Number of Terms: ";
  cin>>n;
  cout<<"Fibonacci Series:"<<endl;
  for(int i=1; i<=n; i++){
    if(i==1){
      cout<<" "<<t1<<" ";
      continue;
    }
    if(i==2){
      cout<<t2<<" ";
      continue;
    }
    nt = t1 + t2;
    t1 = t2;
    t2 = nt;
    cout<<nt<<" ";
  }
  return 0;
}
