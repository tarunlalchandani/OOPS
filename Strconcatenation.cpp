#include<bits/stdc++.h>
using namespace std;
class Str{
	private :
		char *name = NULL;
	public :
		Str(){
			name = new char[6];
			name = "Hello";
		}
		Str(char* firstname, char* lastname){
			int l1  = strlen(firstname);
			int l2 = strlen(lastname);
			name = new char[l1 + l2 + 1];

			for(int i=0; i<l1; i++) {
				name[i] = firstname[i];
			}
			
			for(int i=0;i<l2;i++){
				name[l1+i] = lastname[i];
			}
			name[l1+l2] = '\0';
			cout<<name;
		}
		
};
int main(){
 char firstname[5],lastname[11];
	cout<<"Enter your first name"<<endl;
 scanf("%s",firstname);
	cout<<"Enter your last name"<<endl;
 scanf("%s",lastname);
	Str s(firstname,lastname);
	//cout<<s.getname();
	return 0;
}
