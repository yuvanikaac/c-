#include<iostream>
using namespace std;
class Add{
	public:
		int num1;
		int num2;
};
int main(){
	Add a1;
	double result=0.0;
	cout<<"enter first number: "<<endl;
	cin>>a1.num1;
	cout<<"enter second number: "<<endl;
	cin>>a1.num2;
	result=a1.num1 + a1.num2;
	cout<<"the result is:"<<result<<endl;
	
	return 0;
}
