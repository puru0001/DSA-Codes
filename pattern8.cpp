#include<iostream>
using namespace std;

int main(){
	int height;
	int count = 0;
	cout<<"Enter the height of the pattern = ";
	cin>>height;
	
	for(int i = 1; i <= height; i++){
		for(int j = 1; j <= i; j++){
			count= count + 1;
			cout<<count<<" ";
		}
		cout<<endl;
	}
	return 0;
}
