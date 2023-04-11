/*W a. p. to print 

	A B C D E
	F G H I J
	K L M N O
	P Q R S T
	U V W X Y
*/
#include<iostream>
using namespace std;

int main(){
	int lim;
	char count = 'A';
	cout<<"Enter the limit of the pattern = ";
	cin>> lim;
	
	for(int i=1; i<=lim; i++){
		for(int j=1; j<=lim; j++){
			
//			char ch = 'A' + count - 1;
			cout<<count<<" ";
			count = count + 1;
		}
		cout<<endl;
	}
	return 0;
}
