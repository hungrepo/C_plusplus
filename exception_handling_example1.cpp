/*  - exception handling provides a way to transfer control from
      one part of a programe to another. 
      e.g. to avoid program crash 
      key words: try, catch and throw
*/
#include<iostream>
using namespace std;
#include<stdexcept>
int divide(int numer, int demo)
{
    if (demo==0)
    {
        cout << "not allow demo equal to zeo";
    }
    else{
        return numer/demo;
    }    
}

int divide2(int numer, int demo)
{
    if (demo==0)
    {
        throw invalid_argument("division by zero is not allowed");
    }
        return numer/demo;    
}

int main()
{
    int numerator, denominator;
    cout << "Enter numerator and denominator: " << endl;
    cin >> numerator >> denominator;
    
    try
    {   if (denominator==0)
        {
            throw denominator;
        }
     cout << "Result is: " << numerator/denominator << endl;    
    }
    catch(int ex)
    {
        cout << "Divide by zero is not allow" << ex;
    }

     
    if (denominator==0)
    {
        cout << "Divide by zero is not allow";
    }
    else
    {
        cout << "Result is: " << numerator/denominator << endl;    
    }   

    return 0;
}