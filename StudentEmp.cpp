#include<bits/stdc++.h>
using namespace std;
class Person{
	private:
		string name;
		char gender;
		int age;
	public :
		void getdata();
		void display();
};
void Person::getdata(){
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"Enter gender: "<<endl;
	cin>>gender;
	cout<<"Enter age: "<<endl;
	cin>>age;
}
void Person::display(){
	cout<<"Name: "<<name<<endl;
	cout<<"Gender: "<<gender<<endl;
	cout<<"Age: "<<age<<endl;
}
class Student: public Person{
	string institute;
	int year;
	public:
		void getinfo();
		void putinfo();
};
void Student::getinfo(){
	Person::getdata();
	cout<<"Enter the Institute name: "<<endl;
	cin>>institute;
	cout<<"Enter your college year: "<<endl;
	cin>>year;
}
void Student::putinfo(){
	Person::display();
	cout<<"Institute: "<<institute<<endl;
	cout<<"College Year: "<<year<<endl;
}
class Employee: public Person{
	string company;
	int salary;
	public:
		void getinfo();
		void putinfo();
};
void Employee::getinfo(){
	Person::getdata();
	cout<<"Enter the company name"<<endl;
	cin>>company;
	cout<<"Enter the Salary"<<endl;
	cin>>salary;
}
void Employee::putinfo(){
	Person::display();
	cout<<"Company name: "<<company<<endl;
	cout<<"Salary: "<<salary<<endl;
}
int main(){
	Student Ram;
	Ram.getinfo();
	Employee Shyam;
	Shyam.getinfo();
	Ram.putinfo();
	Shyam.putinfo();
	return 0;
}
