#include<iostream>
using namespace std;

int main(){
	int lim;
	
	cout<<"Enter the limit of the pattern = ";
	cin>> lim;
	int count= 0;
	for(int i=1; i<=lim; i++){
		for(int j=lim-i; j>=1; j--){
			cout<<"  ";
		}
		for(int j=lim-lim+i; j>=1; j--){
			count=count+1;
			cout<<count<<" ";
		}
		cout<<endl;
	}
	
}
