#include<bits/stdc++.h>
using namespace std;
class Polygon{
	protected:
		int n;
	public :
		void setSides(){
			cout<<"Enter the no. of sides";
			cin>>n;
		}
		float area(float r){
			if(n==0){
				return 3.14*r*r;
			}
			else if(n==4){
				return r*r;
			}
			else if(n==5){
				return .769*r*r;
			}
			else if(n==6){
				return 2.59*r*r;
			}
			else if(n==8){
				return 4.82*r*r;
			}
		}
		float area(float a,float b){
			return a*b;
		}
		float area(float a,float b,float c){
			float s = (a+b+c)/2;
			s = sqrt(s*(s-a)*(s-b)*(s-c));
			return s;
		}
};
class Traingle:public Polygon{
	public:
	Traingle(){
		n=3;
	}
};
class Rectangle:public Polygon{
	public:
	Rectangle(){
		n=4;
	}
};
class Octagon:public Polygon{
	public:
		Octagon(){
			n=8;
		}
};
class Pentagon:public Polygon{
	public:
		Pentagon(){
			n=5;
		}
};
class Square:public Polygon{
	public:
		Square(){
			n=4;
		}
};
class Circle:public Polygon{
	public:
		Circle(){
			n=0;
		}
};
int main(){
	Traingle t;
	Rectangle r;
	Octagon o;
	Pentagon p;
	Square sq;
	Circle c;
	cout<<"Area of traingle"<<t.area(3,4,5)<<endl;
	cout<<"Area of Rectangle"<<r.area(4,5)<<endl;
	cout<<"Area of Circle"<<c.area(5)<<endl;
	cout<<"Area of Pentagon"<<p.area(32)<<endl;
	cout<<"Area of Octagon"<<o.area(2)<<endl;
	cout<<"Area of Square"<<sq.area(4)<<endl;
	


	
}
