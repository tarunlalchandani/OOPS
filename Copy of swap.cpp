#include<iostream>
using namespace std;
void swap1(int x,int y){
	cout<<y<<x;
}
void swap2(int *x,int *y){
  int a = *x;
  *x = *y;
  *y = a;
}
void swap3(int &x,int &y){
	int temp = x;
	x=y;
	y = temp;
}
int main(){
	int a,b;
	a=3;
	b=6;
	swap1(a,b);
	swap2(&a,&b);
	cout<<a<<" "<<b;
	swap3(a,b);
	cout<<a<<" "<<b;

}
