#include<iostream>
using namespace std;
class Box{
	public:
		int length;
		int height;
		int width;
};
int main(){
	Box b1;
	Box b2;
	double volume1=0.0;
	double volume2=0.0;
	b1.length=5.0;
	b1.height=2.0;
	b1.width=4.0;
	b2.length=17.0;
	b2.height=3.0;
	b2.width=6.0;
	volume1=b1.length*b1.height*b1.width;
	volume2=b2.length*b2.height*b2.width;
	cout <<"the volumeof box1 is"<< volume1 << endl;
	cout <<"the volumeof box2 is"<< volume2 << endl;
	return 0;
}
