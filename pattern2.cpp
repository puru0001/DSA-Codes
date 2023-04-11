#include<iostream>
using namespace std;
int main()
{
	int lim;
	
	cout<<"Please inter the count limit = ";
	cin>>lim;
	
	for(int i=1; i<=lim; i++){
		for(int j=lim; j>=1; j--){
			cout<<" "<<j;
		}
		cout<<endl;
	}
	return 0;
}
