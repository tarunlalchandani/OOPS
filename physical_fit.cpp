//publicly and Protectedly inherited
#include<bits/stdc++.h>
using namespace std;
class Basic_Info{
	private :
		string name;
		int rollno;
		char gender;
	public :
		void getdata2(){
			cout<<"Enter the Name: "<<endl;
			cin>>name;
			cout<<"Enter the Roll no. "<<endl;
			cin>>rollno;
			cout<<"Enter Gender"<<endl;
			cin>>gender;
		}
		void display2(){
			cout<<"Name: "<<name<<endl;
			cout<<"rollno: "<<rollno<<endl;
			cout<<"Gender: "<<gender<<endl;
		}
};
class Physical_Fit:public Basic_Info{
	private :
		int height;
		int weight;
	public :
		void getdata(){
			getdata2();
			cout<<"Enter the height"<<endl;
			cin>>height;
			cout<<"Enter the weight"<<endl;
			cin>>weight;
		}
		void display(){
			display2();
			cout<<"height: "<<height<<endl;
			cout<<"weight: "<<weight<<endl;
		}
};
int main(){
	Physical_Fit P;
	P.getdata();
	P.display();
	return 0;
}
