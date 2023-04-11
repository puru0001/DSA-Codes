#include<iostream>
using namespace std;
int main(){
	int lim;
	int count=0;
	cout<<"Enter your limit count = ";
	cin>>lim;
	
	for(int i=1; i<=lim; i++)
	{
		for(int j=1; j<=lim; j++)
		{
			count= count + 1;
			cout<<" "<<count;
		}
		cout<<endl;
	}
	return 0;
}
