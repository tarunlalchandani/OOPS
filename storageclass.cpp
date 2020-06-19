#include<bits/stdc++.h>
#include "storageclass2.h";
using namespace std;
extern int b;
class A{
	int p;
	static int q;
	
	public:
		int s;
		A();
		void iner();
		void display();
};
int A::q = 10;
void A::display(){
	cout<<p<<" and "<<b<<" and "<<q<<endl;
}
A::A(){
	p=6;
	s = 12;
}
void A::iner(){
	p++;
	q++;
	s++;
	
}

int main(){
	A a1 = A();
	A a2;
	for(int i=0;i<10;i++){
		a1.iner();
		increment();
	}
	a2.iner();
	a2.iner();
	a1.display();
	a2.display();
}
