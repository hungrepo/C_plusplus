#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number: " << endl;
    int num, n, digit, rev = 0;
    cin >> num;
    n = num;
    while (num!=0)
    {
        digit =  num%10;
        rev = rev*10 + digit;
        num = num/10;
    }
    if(n == rev )
    {
        cout << "this is a palindrome" << endl;
    }
    else
    {
        cout << "this is not a palindrome" << endl;
    }
}