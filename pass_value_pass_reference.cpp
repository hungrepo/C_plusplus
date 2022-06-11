/*  - pass by value
*/
#include<iostream>
using namespace std;
// pass by value
void passByValue(int x, int y)
{
    int z = x; 
    x = y;
    y = z;
}
void passByReference (int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

void passByAddress (int *x, int *y)
{
    int z = *x;         // z equals to value where x points to
    *x = *y;            // address of x points to stores value y points to 
    *y = z;             // address of y points to stores value z    
}


int main()
{
    int a = 5, b = 10;
    cout << "Before passing a: " << a << " and b: " << b<< endl;
    passByReference(a,b);
    cout << "After passing a: " << a << " and b: " << b<< endl;


    a = 20, b = 30;
    cout << "Before passing a: " << a << " and b: " << b<< endl;
    passByAddress(&a,&b);
    cout << "After passing a: " << a << " and b: " << b<< endl;
    return 0;
}