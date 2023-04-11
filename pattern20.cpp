#include<iostream>
using namespace std;

int main(){
	int lim;
	char ch = 'A', cha;
	
	cout<<"Enter the limit of the pattern = ";
	cin>> lim;
	
	for(int i=1; i<=lim; i++){
//		ch= 'A' + i-1;
		for(int j=1; j<=i; j++){
//			cha =ch+j-1;
//			cout<<cha<<" ";
			ch = 'A'+i+j-2;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	return 0;
}
