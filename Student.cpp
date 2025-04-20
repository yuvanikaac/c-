#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		string name;
		void insert(int i,string n)
		{
			id=i;
			name=n;
		}
		void dispaly(){
			cout<<id<<"  "<<name<<endl;
		}
};
int main(void){
	Student s1;
	Student s2;
	s1.insert(61, "Ana");
	s2.insert(14, "billy");
	s1.dispaly();
	s2.dispaly();
	return 0;
	
}
