#include<iostream>
using namespace std;

int main(){
	int lim;
	char ch = 'A', cha = 'A';
	
	cout<<"Enter the limit of the pattern = ";
	cin>> lim;
	
	for(int i=1; i<=lim; i++){
		for(int j=1; j<=i; j++){
			cout<<ch<<" ";
			
//			cha ='A'+i-1;
//			cout<<cha<<" ";

		}
		ch= 'A' + i;
		cout<<endl;
	}
	return 0;
}
