#include<iostream>
using namespace std;
void reverse(int);
int main()
{
    int num;
    cout << "Input a number : ";
    cin >> num;
    reverse(num);
    return 0;
}


void reverse(int in)
{
    bool negative = false;
    if (in < 0)
    {
        in = 0 - in;
        negative = true;
    }

    if (in / 10 == 0)
        cout <<  in % 10;
    else{
        if (negative == true) {
            cout << '-';
            negative = false;
        }
        cout << in % 10;
        reverse(in / 10);
    }
}
