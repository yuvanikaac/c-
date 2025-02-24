#include<iostream>
using namespace std;
int main(){
	int day;
	cout<<"Welcome to our day names in the week"<<endl;
	cout<<"There are totally seven days in a week.So enter the number and see the name of the day out of the seven days in the week"<<endl;
	cout<<"Enter the day number"<<endl;
	cin>>day;
	switch(day){
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
			cout<<"Wdenesday"<<endl;
			break;
		case 4:
			cout<<"Thursday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saturday"<<endl;
			break;
		case 7:
			cout<<"Sunday"<<endl;
			break;
		default:
			cout<<"Invalid entry,Please enter the valid number"<<endl;
		
	}
	return 0;
}
