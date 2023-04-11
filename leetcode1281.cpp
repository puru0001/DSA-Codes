#include<iostream>
using namespace std;

int main(){
        int a, n, pd=1,sm=0;
    
        cout << "Please enter the number = ";
    	cin >> n;
    	
        while(n != 0){
            a = n%10;
            pd = pd*a;
            sm = sm+a;
            n = n/10;
        }
        int ans= pd-sm;
		cout<<ans;

    }

