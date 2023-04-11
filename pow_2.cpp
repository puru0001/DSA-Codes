#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int x, n=2;
	cout <<"Enter the number that you wanted to check = ";
	cin >> x;
	
	for (int i=0; i <= 32; i++){
		if(n == x){
			cout<<"true";
			break;
		}
		
		if(x == 1){
			cout<<"true";
			break;
		}
				
		else if(i > 31){
			cout<<"false";
			break;
		}
		
		n = n * n;
	}
	return 0;
}
