//complex program with member functions
#include<iostream>
using namespace std;
class Complex{
	float r;
	float i;
	public :
		void setdata(float real,float imaginary){
			r = real;
			i = imaginary;
  		}
		Complex operator +(Complex c);
		void display(){
			cout<<"Real Part"<<r<<endl;
			cout<<"Imaginary Part"<<i<<endl;
		}
		Complex operator -(Complex c);
		Complex operator *(Complex c);
		Complex operator /(Complex c);
};
Complex Complex::operator +(Complex c){
	Complex temp = Complex();
	temp.r = r + c.r;
	temp.i = i + c.i;
	return temp;
}
Complex Complex::operator -(Complex c){
	Complex temp = Complex();
	temp.r = r - c.r;
	temp.i = i - c.i;
	return temp;
 }
Complex Complex::operator *(Complex c){
	Complex temp = Complex();
	temp.r = (r*c.r)-(i*c.i);
	temp.i = (r*c.i)+(i*c.r);
	return temp;
}
Complex Complex::operator /(Complex c){
	Complex temp = Complex();
	float jai = c.r*c.r+c.i*c.i;
	temp.r = ((r*c.r+i*c.i)/jai);
	temp.i = ((i*c.r-r*c.i)/jai);
	return temp;

}
int main(){
 	Complex c1;
 	Complex c2;
	Complex c3;
	Complex c4;
	Complex c5;
	Complex c6;
	c1.setdata(5,7);
	c2.setdata(4,8);
	c3 = c1+c2;
	c4 = c1-c2;
	c5 = c1*c2;
	c6 = c1/c2;
	cout<<"Addition of the two complex number is"<<endl;
	c3.display();
	cout<<endl<<"Substraction of the two complex number is"<<endl;
	c4.display();
	cout<<endl<<"Multiplication of the two complex number is"<<endl;
	c5.display();
	cout<<endl<<"Division of the two complex number is"<<endl;
	c6.display();
}
