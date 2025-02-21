#include<iostream>
using namespace std;
class Calc{
	public:
	int num1;
	int num2;
};
int main(){
	Calc c;
	char d;
	double result=0.0;
	cout<<"enter two numbers"<<endl;
	cin>>c.num1;
	cin>>c.num2;
	cout<<"the operation available are +,*"<<endl;
	cin>>d;
	switch(d){
		case '+':
			result=c.num1+c.num2;
			cout<<"the sum is:"<<result<<endl;
			break;
		case '*':
			result=c.num1*c.num2;
			cout<<"the mul is:"<<result<<endl;
			break;
	} 
	return 0;
	
}
