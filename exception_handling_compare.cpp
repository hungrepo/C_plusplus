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
 
     try
    {
      cout << divide2(2,0) << endl;  
     }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}