/*  -  dynamic memory allocation allows us to set array size dynamically during runtime 
       rather than at complie time    
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    int *prt;
    cout << "Enter number of value we want to store" << endl;
    cin >> size;
    prt = new int[size];
    for (int i =1; i < size ; i++)
    {
      cin >> prt[i];
    }
    cout << "Value in the array are: " << endl;
    for (int i =1; i < size; i++)
    {
       cout << prt[i] << endl; 
    }

    return 0;
}