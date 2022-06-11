/*  - same name but different parameters
*/
#include<iostream>
using namespace std;
inline int add(int a, int b, int c = 0)
{
    return a+b+c;
};
inline double add(double a, double b)
{
    return a+b;
}
int main()
{
    cout <<  add(3,4,4) << endl;
    cout <<  add(3.2,4.5) << endl;
    
    return 0;
}