#include <iostream>
using namespace std;

class circle{
	public:
		float radius, A;
		void area();

};

void circle::area(){
	cout<<"Enter radius of circle: ";
	cin>>radius;
	A=3.142*radius*radius;
	cout<<"The area of circle is "<< A<<endl;
}

int main(){
	circle c1;
	c1.area();
	return 0;
}
