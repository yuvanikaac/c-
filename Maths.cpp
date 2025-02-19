#include<iostream>
using namespace std;
class Maths{
	public:
	int num1;
	int num2;
};
int main(){
	Maths sum;
	Maths sub;
	Maths div;
	Maths mul;
	double result1=0.0;
	double result2=0.0;
	double result3=0.0;
	double result4=0.0;
	sum.num1=16;
	sum.num2=18;
	result1=sum.num1 + sum.num2;
	cout<< "the sum of"<<sum.num1<<"and"<<sum.num2<<"is"<<result1<<endl;
	sub.num1=20;
	sub.num2=10;
	result2=sub.num1 - sub.num2;
	cout<< "the difference of"<<sub.num1<<"and"<<sub.num2<<"is"<<result2<<endl;
	mul.num1=10;
	mul.num2=50;
	result3=mul.num1 * mul.num2;
	cout<< "the product of"<<mul.num1<<"and"<<mul.num2<<"is"<<result3<<endl;
	div.num1=10;
	div.num2=5;
	result4=div.num1 / div.num2;
	cout<< "the division of"<<div.num1<<"and"<<div.num2<<"is"<<result4<<endl;
	
	return 0;
	}
