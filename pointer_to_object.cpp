/*  -  
*/
#include<iostream>
using namespace std; 

class ComplexNumber
{
private:
    int real;
    float img;
public:
    ComplexNumber(){
    }
    ComplexNumber(int r, float i)
    {
        real = r;
        img = i;
    }
    void displayData()
    {
        cout << "Complex number is: " << real << "+" << img <<"i" << endl; 
    }
    int getRealPart()
    {
        return real;
    }
    float getImgPart()
    {
        return img;
    }
 
};
 
ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2)
{
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImgPart() + n2.getImgPart();
    ComplexNumber tem(r,i);
    return tem;
} 
int main()
{
    ComplexNumber comp1(5,4);
    ComplexNumber comp2(20,11);
    ComplexNumber comp3;
    comp3 = add2number(comp1,comp2);
    comp3.displayData();

    ComplexNumber *ptr1;
    ptr1 = &comp3;
    ptr1->displayData();

    ptr1 = &comp1;
    ptr1->displayData();
    return 0;
}