/*  -   
*/
#include<iostream>
using namespace std;
inline int add(int a, int b, int c = 0)
{
    return a+b+c;
}
int main()
{
    cout <<  add(3,4,4) << endl;
    cout <<  add(3,4) << endl;
    
    return 0;
}