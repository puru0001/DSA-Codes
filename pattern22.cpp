#include<iostream>
using namespace std;

int main(){
	int lim, count = 0;
	
	cout<<"Ebter the limit of the pattern = ";
	cin>>lim;
	
	for(int i=lim; i>=1; i--){
		for(int j=1; j<=i; j++){
			count=count+1;
			cout<<count<<" ";
		}
		cout<<endl;
	}
	return 0;
}
