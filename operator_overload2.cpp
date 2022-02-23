#include<iostream>
using namespace std;
class Complex{
int real,img;
public:
Complex(){
real=0;
img=0;
}
Complex(int x, int y){
real = x;
img = y;
}
void display(){
cout<<"The value for real part : "<< real << " and img part: "<<img<<endl<<endl;

}
Complex operator - (Complex obj)
{
Complex temp;
temp.real = real - obj.real;
temp.img = img - obj.img;


return temp;
}
};
int main(){
Complex c1(10,12), c2(5,10);
Complex c3;
c1.display();
c2.display();
c3.display();
cout<<"The action starts here for subtract :"<<endl;
c3= c1-c2;
c3.display();
return 0;
}
