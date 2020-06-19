//Hare Krishna
#include<bits/stdc++.h>
using namespace std;
class Shape{
	public :
		virtual float area() = 0;
		virtual float perimeter()=0;
};
class Traingle : public Shape{
	private :
		float s1,s2,s3;
	public:
		Traingle(){
			s1 = 0;
			s2 = 0;
			s3 = 0;
		}
		Traingle(int x, int y, int z){
			s1 = x;
			s2 = y;
			s3 = z;
		}
		float area();
		float perimeter();
};

float Traingle::area(){
	float s = (s1+s2+s3)/2.0;
	float area =sqrt(s*(s-s1)*(s-s2)*(s-s3));
	return area;
}
float Traingle::perimeter(){
	return (s1+s2+s3);
}
class Square : public Shape{
	private :
		float side;
	public :
		Square(){
			side = 0;
		}
		Square(int x){
			side = x;
		}
		float area();
		float perimeter();
};
float Square::area(){
	return (side*side);
}
float Square::perimeter(){
	return (4*side);
}
class Rectangle: public Shape{
	private :
		float l, b;
	public :
		Rectangle(){
			l = 0;
			b = 0;
		}
		Rectangle(int x, int y){
			l = x;
			b = y;
		}
		float area();
		float perimeter();
};
float Rectangle::area(){
	return (l*b);
}
float Rectangle::perimeter(){
	return 2*(l+b);
}
int main(){
	Shape *ptr1, *ptr2, *ptr3;
	ptr1 = new Traingle(3,4,5);
	ptr2 = new Rectangle(5,6);
	ptr3 = new Square(5);
	Square sq(6);
	cout<<"Area of traingle"<<ptr1->area()<<endl;
	cout<<"Area of Square"<<ptr3->area()<<endl;
	cout<<"Area of Rectangle"<<ptr2->area()<<endl;
	cout<<"Perimeter of Traingle"<<ptr1->perimeter()<<endl;
	cout<<"Perimeter of Square"<<ptr3->perimeter()<<endl;
	cout<<"Perimeter of Rectangle"<<ptr3->perimeter()<<endl;
	return 0;
}
