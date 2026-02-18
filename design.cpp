#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

class stars{
	public:
		int n,delay;
		void haha(){
			cout<<"How many lines of stars do you wants?: ";
			cin>>n;
			delay=300/n;
			
			while (1){
				for (int i=0; i<=n; i++){
					std::this_thread::sleep_for(std::chrono::milliseconds(delay));
					for (int j=0;j<i;j++){
						cout<<"*";
					}
					cout<<endl;
				}
				for (int i=n; i>=0; i--){
					std::this_thread::sleep_for(std::chrono::milliseconds(delay));
					for (int j=0;j<i;j++){
						cout<<"*";
					}
					cout<<endl;
				}
			}
		}
};

int main(){
	stars s1;
	s1.haha();
	
	return 0;
}
