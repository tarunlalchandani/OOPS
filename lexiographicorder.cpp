#include<bits/stdc++.h>
using namespace std;
class A{
	string first = "He";
	protected :
	     string getString(){
			return first;
		}

};
class B{
	string second = "Hrt";
	protected:
		
		string getString(){
			return second;
		}
	
};
class C: public A, public B{
	public:
		void Printer(){
			string first;
			string second;
			string str1 = A::getString();
			string str2 = B::getString();
			int i=0,j=0;
			int l = min(str1.size(), str2.size());
			while(i<l){
				if(str1[i]>str2[j]){
					first = str2;
					second = str1;
					break;
				}
				else if(str1[i]<str2[j]){
					first = str1;
					second = str2;
					break;
				}
				else{
					i++;
					j++;
				}
			}
			if(i==l){
				if(str1.size()<str2.size()){
					first = str1;
					second = str2;
				}
			}
			cout<<"The sorted order of the Strings is";
			cout<<first<<" "<<second;
		}
};
int main(){
	C objC;
	objC.Printer();
	return 0;
}
