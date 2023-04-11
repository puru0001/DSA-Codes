#include<iostream>
using namespace std;

int main(){
	int lim;
	
	cout<<"Inter the limit of the pattern = ";
	cin>> lim;
	
	for(int i=1; i<=lim; i++){
		
		for(int j=1; j<=lim-i+1; j++){
			cout<<j<<" ";
		}
		
		for(int j=i-1; j>=1; j--){
			cout<<"* ";
		}
		
		for(int j=i-1; j>=1; j--){
			cout<<"* ";
		}
		
		for(int j=lim-i+1; j>=1; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
