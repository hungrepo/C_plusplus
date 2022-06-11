#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int i = 0;
     do 
     {
         sum+= i;
         i++;
     }
     while (i <= 5);
     cout << "Sum is: " << sum << endl;
}