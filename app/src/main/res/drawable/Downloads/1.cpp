#include <iostream>
using namespace std;

class Mother{
	public:
	char name[50];
	char name1[50];
	void display(){
	cout << " mother name :";
	cin>> name;
	}	
};
class Daughter : public Mother{
	public: 
	void display1() {
	cout << "Daughhter =";
	cin >>name1;
		}
	void  getdisplay1() {
	cout<<endl;
	cout << "mother="<<name<<endl;
	cout << "Daughter="<<name1<<endl;
		}
};
main() {	
	Daughter dau;
	dau.display();
	dau.display1();
	dau.getdisplay1();

}
