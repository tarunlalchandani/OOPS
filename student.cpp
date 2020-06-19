#include<iostream>
using namespace std;
class student{
	private:
		int admissionno;
		int maths;
		int english;
		int computer;
		int science;
		int socialscience;

	public:
		void getdata();
		float averagemarks();
		void display();
		int totalmarks();
		float cgpa();
};
void student::display (){
	cout<<"Admission number of the student is"<<admissionno<<endl;
	cout<<"total marks of the student is"<<totalmarks()<<endl;
	cout<<"average marks of the student is"<<averagemarks()<<endl;
	cout<<"cgpa of the student is"<<cgpa()<<endl;
}
int student::totalmarks(){
	return (english+maths+computer+science+socialscience);
}
float student::averagemarks(){
	return (totalmarks()/5);
}
float student::cgpa(){
	float gpa = averagemarks()/9.5;
	return gpa;
}

void student::getdata(){
	cout<<"Enter your last four digits of the admission no";
	cin>>admissionno;
	cout<<"Enter marks in maths";
	cin>>maths;
	cout<<"Ënter marks in english";
	cin>>english;
	cout<<"Enter marks in computer";
	cin>>computer;
	cout<<"Enter marks in science";
	cin>>science;
	cout<<"Enter marks in socialscience";
	cin>>socialscience;
}
int main(){
	int n;
	cout<<"enter the no. of students";
	cin>>n;
	student s[n];
	for(int i=0;i<n;i++){
		cout<<"enter data for the n students one by one";
		s[i].getdata();
	}
	for(int i=0;i<n;i++){
		cout<<s[i].totalmarks()<<" "<<s[i].averagemarks()<<" "<<s[i].cgpa();
		cout<<endl;
	}
	return 0;
}
