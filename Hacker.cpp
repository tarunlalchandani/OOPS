#include<bits/stdc++.h>
using namespace std;
class Hacker{
	private :
		string Password;
	protected :
		string Username;
	public :
		string getUsername();
		void EnterSystem();
		void ChangePassword();
		void setUsername(string);
		void setPassword(string);
		string getPassword(){
			return Password;
		}
};
void Hacker::EnterSystem(){
	int key;
	string Password;
	string Username;
	cout<<"Enter your Username"<<endl;
	cin>>Username;
	cout<<"Hello Hacker Enter Your Key and Password";
	cin>>key>>Password;
	if(key==1965 and Password=="Haribol" and Username=="TarunLalchandani"){
		cout<<"Mission Successful"<<endl;
	}
	else{
		cout<<"You failed It is not your Cup of Tea"<<endl;
	}
}
void Hacker::setUsername(string User){
	Username = User;
}
void Hacker::setPassword(string Pass){
	Password = Pass;
}
void Hacker::ChangePassword(){
	int k;
	string u,p;
	cout<<"Enter the old Username, Password and Key"<<endl;
	cin>>u>>p>>k;
	if(u=="TarunLalchandani" and p=="Haribol" and k==1965){
		cout<<"Enter the new Password";
		cin>>p;
	}
	setPassword(p);
}
class WhiteHacker : public Hacker{
	private :
		int Key = 1965;
	public :
		WhiteHacker(string User, string Pass){
			setUsername(User);
			setPassword(Pass);
		}
		int getKey();
};
int WhiteHacker::getKey(){
	return Key;
}
int main(){
	int x;
	WhiteHacker tarun = WhiteHacker("TarunLalchandani","Haribol");
	cout<<"Welcome Tarun to the System"<<endl;
	cout<<"Enter -1 for exit 1 for entering to Host System and 2 for changing Password and 3 for getting the Key"<<endl;
	cin>>x;
	while(x!=-1){

		if(x==1){
			tarun.EnterSystem();
		}
		else if(x==2){
			tarun.ChangePassword();
		}
		cout<<"Enter -1 for exit 1 for entering to Host System and 2 for changing Password and 3 for getting the Key"<<endl;
		cin>>x;
		
	}
	return 0;
}
