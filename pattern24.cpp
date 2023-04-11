/*w a p to print this 
	D E F G
	C D E F
	B C D E
	A B C D 
*/
#include<iostream>
using namespace std;

int main(){
	int lim, count = 0;
	char ch = 'A';
	cout<<"Ebter the limit of the pattern = ";
	cin>>lim;
	
	for(int i=1; i<=lim; i++){
		char ch='A'+lim-i;
		for(int j=1; j<=lim; j++){
			cout<<ch<<" ";
			ch=ch + 1;
		}
		cout<<endl;
	}
	return 0;
}
