#include<bits/stdc++.h>
using namespace std;
class Number{
	protected:
		int num;
	public:
		void setNumber();

};
void Number::setNumber(){
	cout<<"Enter number";
	cin>>num;
}
class Factorial:public Number{
	public :
		void getFactorial(){
			int ans=1;
			int n = num;
			for(int i=1;i<=n;i++){
				ans = i*ans;
			}
			cout<<"The factorial of the number is"<<ans;
		}
};
class Armstrong:public Number{
	public:
		void checkArmstrong(){
			int temp;
			int n = num;
			stringstream ptr;
			int sum=0;
			ptr<<n;
			string jai;
			ptr>>jai;
			int l = jai.size();
			int num = n;
			for(int i=0;i<l;i++){
				int x = n%10;
				sum = sum + x*x*x;
				n=n/10;
			}
			if(sum==num){
				cout<<"It is a Armstrong number";
			}
			else{
				cout<<"It is not a Armstrong Number";
				
			}
			return;
			
		}
};
int main(){
	Factorial objf;
	Armstrong arm;
	objf.setNumber();
	arm.setNumber();
	objf.getFactorial();
	arm.checkArmstrong();
	return 0;
}
