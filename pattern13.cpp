#include<iostream>
using namespace std;

int main(){
	int lim;
	cout<<"Enter the limit of the pattern = ";
	cin>> lim;
	
	for(int i=1; i<=lim; i++){
		for(int j=1; j<=lim; j++){
			char ch = 'A' + j - 1;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	return 0;
}
