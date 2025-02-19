#include<iostream>
using namespace std;
class Animal{
	public:
	string color;
	string type;
};
int main(){
	Animal dog;
	Animal cat;
	dog.color="black";
	dog.type="fighter";
	cat.color="white";
	cat.type="pet";
	cout<<"the color of dog is"<<dog.color<<"and the type is"<<dog.type<<endl;
	cout<<"the color of cat is"<<cat.color<<"and the type is"<<cat.type<<endl;
	return 0;
	
}
