#include<iostream>
using namespace std;
class space
{
int x; int y; int z;
public:
void getdata(int a, int b, int c);
void display();
friend void operator-(space &s);
};
void space::getdata(int a, int b, int c)
{
x=a;
y=b;
z=c;
}
void space::display()
{
cout<<"\nx="<<x<<",y="<<",z="<<z;
}
void operator-(space &s1)
{
s1.x=-s1.x;
s1.y=-s1.y;
s1.z=-s1.z;
}
int main()
{
space s;
s.getdata(50,70,90);
cout<< "s:";
s.display();
cout<<"\n";
operator-(s);
cout<<"-s:";
s.display();
return 0;
}
