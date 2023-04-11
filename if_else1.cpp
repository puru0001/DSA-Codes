#include<iostream>
using namespace std;

int main(){
	char ch;
	
	cout<<"Enter any character =";
	cin>>ch;
	
	if('a' <= ch <= 'z'){
		cout<< ch <<" is lowercase";
	}
	else if('A' <= ch <= 'Z'){
		cout<< ch <<" is Uppercase";
	}
	else if('0' <= ch <= '9'){
		cout<< ch <<" is a number";
	}
	return 0;
}
