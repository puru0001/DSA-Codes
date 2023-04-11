#include<iostream>
using namespace std;
int main(){
	int lim;
	cout<<"Enter your limit count = ";
	cin>>lim;
	
	for(int i=1; i<=lim; i++)
	{
		for(int j=1; j<=lim; j++)
		{
			cout<<" "<<j;
		}
		cout<<endl;
	}
	return 0;
}
