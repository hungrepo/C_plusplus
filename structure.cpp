/*  - ofstream creates files and write information to files
*/
#include<iostream>
#include<fstream>
using namespace std;

struct Person{
    string name;
    int age;
    double salary;

};
 
int main()
{
  Person person1;
  person1.name = "David";
  person1.age = 12;

    return 0;
}