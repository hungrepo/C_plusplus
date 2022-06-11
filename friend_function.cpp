/*  -  friend function of a class is defined outside the class but has a right 
       to access private and protected members of the class 
*/
#include<iostream>
using namespace std; 
class Distance{
    private:
        int meters;
    public:
        Distance()
        {
            meters = 0;
        }
        void displayData() {
            cout << "Meters value: " << meters << endl;
        }
        // prototy or signature
        friend void addValue(Distance &d);
};
// this is friend function of the class Distance
void addValue(Distance &d)      
{
    d.meters = d.meters + 5;
}

int main()
{
    Distance d1;
    d1.displayData();

    addValue(d1);
    d1.displayData();
    return 0;
}