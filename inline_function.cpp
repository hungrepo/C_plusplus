/*  -  can make the code more efficient because when we call that function
       we dont need to transfer control point to other place store that function
*/
#include<iostream>
using namespace std;
inline int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Add of a and b is " << add(a,b) << endl;
    return 0;
}