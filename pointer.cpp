/*  - pointer is a variable that stores the address of some variables
    - So we can refer to the same space in memory from multiple locations. 
      e.g. we use different pointers to store the address of variables
    - save space by being able share components in data structure
    - Dynamic memory allocation: still not clear      
*/
#include<iostream>
using namespace std;
int main()
{
    int var = 5;
    // datatype pointername *
    int     *ip;         // pointer to an interger;
    double  *dp;        // pointer to an interger;
    float   *fp;         // pointer to an interger;
    char    *ch;         // pointer to an interger;

    ip = &var;
    cout << "variable value :" << var << endl;
    cout << "address value:" << ip <<endl;
    cout << "pointer points to the value: " << *ip << endl;
    *ip = 6;
    cout << "variable value" << var << endl;
}