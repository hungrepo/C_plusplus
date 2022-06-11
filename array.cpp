#include<iostream>
using namespace std;
int main()
{
    int arr[3] = {1,2,3};
    double arr1[5];
    arr1[0] = 10;

    int tem_arr[5];
    cout << "Enter 5 integer variable" << endl;
    for(int i = 0; i <5; i++)
    {
        cin >> tem_arr[i];
    }
    for(int i = 0; i <5; i++)
    {
        cout << tem_arr[i];
    }
}