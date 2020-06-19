#include<iostream>
using namespace std;
class A{
	private:
		int b;
	public:
		void operator ++(){
			b = b+2;
		}
		void operator ++(int){
			b=b+3;
		}
		void setdata(int c){
			b=c;
		}
		void display(){
			cout<<b<<endl;
		}
};
int main(){
	A a;
	a.setdata(4);
	++a;
	a.display();
	a.setdata(7);
	a++;
	a.display();
	return 0;
}
