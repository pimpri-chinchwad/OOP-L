#include <iostream>
using namespace std;

class addition{
	public:int A1[10][10], A2[10][10], A3[10][10],n,m,p,q;
	
	
	public:void input(){
		cout<<"Enter number of rows: ";
		cin>>n;
		cout<<"Enter number of columns: ";
		cin>>m;
		cout<<"Enter first matrix: "<<endl;
		for (int i=0;i<n;i++){
			for (int j=0; j<m; j++){
				cin>>A1[i][j];
			}
		}
		cout<<"For second matrix: "<<endl;
		for (int i=0;i<n;i++){
			for (int j=0; j<m; j++){
				cin>>A2[i][j];
			}
		}
	}
	
	public:void output(){
		cout<<"Output matrix: "<<endl;
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cout<<A1[i][j]+" "<<A2[i][j]+" "<<A1[i][j]+A2[i][j]<<" ";
			}
			cout<<endl;
		}
	}
		
};

int main(){
	addition a;
	a.input();
	a.output();
	return 0;
}
		
				
		
