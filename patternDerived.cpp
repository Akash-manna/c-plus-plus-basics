/* Day 6:Q.3>
 * Design a diamond shaped inheritance tree. Create a class A which contains public method void pattern() whicch display the following pattern:
 * 			     
 * 			      *
 * 			    * * *
 * 			  * * * * *
 * 			* * * * * * *
 * 			  * * * * *
 * 			    * * *
 * 			      *
 *
 */

#include<iostream>
using namespace std;

class A
{
	public:
		void pattern()
		{
			int n, m, nBlank, nStar;
			n = 7;
			m = (n+1)/2;
			nBlank = (m-1);
			nStar = 1;
			for(int i=1;i<=n;i++)
			{
				for(int j =1;j<=nBlank;j++)
				{
					cout<<"  ";
				}
				for(int k = 1;k<=nStar;k++)
				{
					cout<<"* ";
				}
				cout<<endl;
				if(i<m){
					nBlank-=1;
					nStar+=2;
				}
				else{
					nStar-=2;
					nBlank+=1;
				}
			}
		}		
};

class B:virtual public A
{};

class C:virtual public A
{};

class D:virtual B, public C
{};

int main()
{
	A objA;
	objA.pattern();
	return 0;
}

