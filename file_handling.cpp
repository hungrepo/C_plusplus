/*  - ofstream creates files and write information to files
*/
#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char arr[100];
    cout << "Enter your name and age";
    cin.getline(arr,100);
    ofstream myfile("xyz.txt");
    myfile << arr;
    myfile.close();  
    cout << "File write operation performed successfully" << endl;

    cout << "Reading from file operation started" << endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout << "array content:" << arr1 << endl;

    return 0;
}