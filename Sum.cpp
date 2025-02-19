#include<iostream>
using namespace std;
class Sum{
	public:
	int num1;
	int num2;
};
int main(){
	Sum s1;
	double result=0.0;
	s1.num1=16;
	s1.num2=18;
	result=s1.num1 + s1.num2;
	cout<< "the sum of"<<s1.num1<<"and"<<s1.num2<<"is"<<result<<endl;
	
	return 0;
	}
