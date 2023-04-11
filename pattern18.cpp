/* w a p to print this
	A B C D E
	B C D E F
	C D E F G
	D E F G H
	E F G H I
*/
#include<iostream>
using namespace std;

int main(){
	int lim;
	char ch;
	cout<<"Enter ther limit of the pattern = ";
	cin>>lim;

	for(int i=1; i<=lim; i++){
		for(int j=1; j<=lim; j++){
			ch='A'+i+j-2;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
