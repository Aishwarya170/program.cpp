#include<iostream>
using namespace std;
class class1;

class class1{
	int real,img;
	public:
		//default constructor
		class1(){
		real=0;
		img=0;

		//param constructor
		class1(int x, int y){
		real=x;
		img=y;
		}
		
		//display func
		void display(){
		
		cout<<"real part:" <<real<<" imaginary part: "<<img<<endl;
		}

		//op overloading using friend function
		friend class1 operator + (class1 a,class2 b);
};

ckass class2{
	int real,img;

	public:
		//default constructor
		class2(){
		real=0;
		img=0;

		//param constructor
		class2(int x,int y){
		}

		//display func
		void display(){

		cout<<"real part:" <<real<< "imaginary part:" <<img<<endl;
		}
 
		//op overloading using friend function
		friend class1 operator + (class1 a, class2 b);
};

class1 operator + (class1 a,class2 b){
class1 temp;
temp.real=a.real+b.real;
temp.img=a.img+b.img;
return temp;
}
