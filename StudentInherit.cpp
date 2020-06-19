//studentinheritance
#include<bits/stdc++.h>
using namespace std;
class Student{
	private:
		int rollno;
		string name;
	public :
		void getdata();
		void showdata();
};
void Student::getdata(){
	cout<<"Enter the roll no. of the Student"<<endl;
	cin>>rollno;
	cout<<"Enter name: "<<endl;
	cin>>name;
}
void Student::showdata(){
	cout<<"rollno: "<<rollno<<endl;
	cout<<"Name: "<<name<<endl;
	
}
class Exam: public Student{
	protected:
		int math,english,hindi,science,computer;
	public:
		void getdata(){
			cout<<"Enter the marks of math, English, hindi, Science, Computer";
			cin>>math>>english>>hindi>>science>>computer;
		}
		void showdata(){
			cout<<"Marks in sub are as follows"<<endl;
			cout<<"Math: "<<math<<" English: "<<english<<" Hindi:"<<hindi<<" Science"<<science<<" Computer"<<computer;
		}
		
};
class Result: protected Exam{
	private:
		int Total_marks;
	public:
		void getdata(){
			Student::getdata();
			Exam::getdata();
			Total_marks = math+english+hindi+science+computer;
		}
		void showdata(){
			Student::showdata();
			Exam::showdata();
			cout<<"Total_Marks: "<<Total_marks<<endl;
		}
		
};
int main(){
	Result r;
	r.getdata();
	r.showdata();
	return 0;
}
