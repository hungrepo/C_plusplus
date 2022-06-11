/*  -  
*/
#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int age;
    double salary;

};
 
int main()
{
  Person p;  
  Person *prt = &p;
  cout << "Enter person detail like name, age, and salary " << endl;
      cin>>  prt->name;
      cin >> prt->age;
      cin >> prt->salary;
  cout << "Details of people" <<  endl; 
      cout<< "Name: " << prt->name << endl;
      cout << "age: " <<  prt->age << endl;
      cout << "salary: " << prt->salary <<endl;
    
    return 0;
}