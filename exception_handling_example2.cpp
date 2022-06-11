/*  - exception handling provides a way to transfer control from
      one part of a programe to another. 
      e.g. to avoid program crash 
      key words: try, catch and throw
*/
#include<iostream>
using namespace std;
// #include<stdexcept>
 
int main()
{
    try
    {
        int num1;
        cout << "Enter the first number" << endl;
        cin >> num1;
        int num2;
        cout << "Enter the second number" << endl;
        cin >> num2;

        if(num2 == 0)
        {
            throw 0;
        }
    }
    catch(...)
    {
        cout << "you can not divide zero" << endl;
    }
     
    return 0;
}