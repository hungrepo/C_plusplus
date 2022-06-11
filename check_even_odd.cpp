#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number: " << endl;
    int num;
    cin >> num;
    if (num%2 == 1)
    {
        cout << "The number is even" ;
    }
    else{
        cout << "The number is odd";
    }
}