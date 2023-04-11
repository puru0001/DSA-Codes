#include<iostream>
using namespace std;

int main(){
	int lim;
	char ch = 'A';
	cout<<"Enter ther limit of the pattern = ";
	cin>>lim;

	for(int i=1; i<=lim; i++){
		for(int j=1; j<=lim; j++){
			
			cout<<ch<<" ";
			ch = ch + 1;
		}
		cout<<endl;
		ch= 'A' + i;
	}
}
