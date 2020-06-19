#include<bits/stdc++.h>
using namespace std;
class Weight{
	private:
		int kg;
		int grams;
	public:
		inline void calculate(Weight w);
		Weight(){
			kg = 0;
			grams = 0;
		}
		Weight(int k, int g){
			kg = k;
			grams = g;
		}
		void display(Weight w){
			cout<<"The Weight is "<<w.kg<<"."<<w.grams<<endl;
		}
};
void Weight::calculate(Weight w){
			grams = grams + w.grams;
			kg = grams/1000+w.kg+kg;
			grams = grams%1000;
}
int main(){
	Weight w1 = Weight(50,480);
	Weight w2 = Weight(30,890);
	w1.calculate(w2);
	w1.display(w1);
	
}
