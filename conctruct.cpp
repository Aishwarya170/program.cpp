#include <iostream>
using namespace std;

class Distance
{
  int feet,inch;
 public:
	distance()
	{
	  cout<<"Default"<<endl;
	}
	Distance(int f,int i)
	{
	  feet=f;
	  inch=i;
	  cout<<feet<<endl<<inch<<endl;
	}
	~Distance()
	{
	   cout<<"Destructer called"<<endl;
	}
};
int main()
{
Distance obj1,obj2(10,20);
}
