#include <iostream>
#include <string>
using namespace std;

class car{
	public:
		string company;
		string model;
		string color;
		void take_input(){
			cout<<"Enter company name: ";
			cin>>company;
			cout<<"Enter model: ";
			cin>>model;
			cout<<"Enter color: ";
			cin>>color;
		}
		void give_output(){
			cout<<"Output:"<<endl<<"Company: "+company<<endl<<"Model: "+model<<endl<<"Color: "+color<<endl;
		}
		
};

int main(){
	car c1;
	c1.take_input();
	c1.give_output();
}
