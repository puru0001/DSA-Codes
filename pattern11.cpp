#include<iostream>
using namespace std;

int main(){
	int height;
	int count = 0;
	cout<<"Enter the height of the pattern = ";
	cin>>height;
	
//	cout<<count<<endl;

	for(int i = 1; i <= height; i++){
//		int value = i;
		for(int j = 1; j <= i; j++){
			cout<<i - j + 1<<" ";
//			cout<<value<<" ";
//			value = value - 1;
		}
		cout<<endl;
	}
	return 0;
}
