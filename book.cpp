//book
#include<bits/stdc++.h>
using namespace std;
class BookPrimary{
	private:
		int book_no;
		string book_name;
	public:
		void getdata(){
			cout<<"Enter the book no."<<endl;
			cin>>book_no;
			cout<<"Enter the book_name"<<endl;
			cin>>book_name;
		}
		void putdata(){
			cout<<"Book no.: "<<book_no<<endl;
			cout<<"Book Name: "<<book_name<<endl;
		}
};
class BookAP{
	private:
		string author_name;
		string publisher;
	public:
		void getdata(){
			cout<<"Enter the Author name: "<<endl;
			cin>>author_name;
			cout<<"Enter the Publisher name: "<<endl;
			cin>>publisher;
		}
		void showdata(){
			cout<<"Author name: "<<author_name<<endl;
			cout<<"Publisher name: "<<publisher<<endl;
		}
};
class Book: public BookAP, public BookPrimary{
	private:
		int pages;
		int Publicationyear;
	public:
		void getinfo(){
			BookPrimary::getdata();
			BookAP::getdata();
			cout<<"Enter the no. of pages in the book"<<endl;
			cin>>pages;
			cout<<"Enter Publication year"<<endl;
			cin>>Publicationyear;
		}
		void showinfo(){
			putdata();
			showdata();
			cout<<"Pages: "<<pages<<endl;
			cout<<"Publication year: "<<Publicationyear<<endl;
		}
};
int main(){
	Book b[3];
	for(int i=0;i<3;i++){
		b[i].getinfo();
	}
	for(int i=0;i<3;i++){
		b[i].showinfo();
	}
	return 0;
}
