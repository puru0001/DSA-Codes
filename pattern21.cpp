/*w a p to print this pattern

	A
	B C
	D E F
	G H I J
*/
#include<iostream>
using namespace std;

int main(){
	int lim;
	char ch = 'A', cha;
	
	cout<<"Enter the limit of the pattern = ";
	cin>> lim;
	
	for(int i=1; i<=lim; i++){
		for(int j=1; j<=i; j++){
			cout<<ch<<" ";
			ch=ch+1;
		}
		cout<<endl;
	}
	return 0;
}
