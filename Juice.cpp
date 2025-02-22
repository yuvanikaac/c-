#include<iostream>
using namespace std;
int main(){
	cout<<"Welcome to juice shop"<<endl;
	cout<<"We have 1 Apple ,2 Orange,3 Pineapple,4 Coconut,5 Amla,6 Lemon"<<endl;
	cout<<"Please enter your choice:"<<endl;
	char d;
	cin>>d;

	switch(d){
		case '1':
			cout<<"You have chosen Apple juice"<<endl;
			break;
		case '2':
			cout<<"You have chosen Orange juice"<<endl;
			break;
		case '3':
			cout<<"You have chosen Pineapple juice"<<endl;
			break;
		case '4':
			cout<<"You have chosen Coconut juice"<<endl;
			break;
		case '5':
			cout<<"You have chosen Amla juice"<<endl;
			break;
		case '6':
			cout<<"You have chosen Lemon juice"<<endl;
			break;
		default:
			cout<<"Invalid choice"<<endl;
			break;
	}
	return 0;
}

