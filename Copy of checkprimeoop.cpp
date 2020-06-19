#include<iostream>
using namespace std;
class number{
	private:
		bool prime;
		int data;
	public:
		bool setprime(bool a);
		bool checkprime(int x);
		bool isprime();
		void setdata(int x);
		int getdata();
};
bool number::setprime(bool a){
	prime = a;
}
bool number::isprime(){
	return prime;
}
void number::setdata(int x){
	data = x;
	
}
int number::getdata(){
	return data;
}
bool number::checkprime(int data){
	bool ans = true;
	for(int i=2;i<data;i++){
		if(data%i==0){
			ans = false;
		}
	}
	return ans;
}
int main(){
	number n[899];
	for(int i=0;i<899;i++){
		n[i].setdata(i+100);
		
		n[i].setprime(n[i].checkprime(n[i].getdata()));
	}
	for(int i=0;i<899;i++){
		if(n[i].isprime()==true){
			cout<<n[i].getdata()<<endl;
		}
	}
	
	
}
