/*  -   
*/
#include<iostream>
using namespace std; 

class MyBaseClass{
    public:
        int x;
        MyBaseClass(){
            x = 4 ;
            y = 4 ;
            z = 5 ;
        }
        void printProtectedData()
        {
            cout << "y: = " << y << endl;
        }
    protected:
        int y;
    private:
        int z;
};

class MyDerivedClass1: public MyBaseClass{
    /* now we have 
        public x, protected y but we dont have z;

    */
};

class MyDerivedClass2: protected MyBaseClass{
    /* now we have 
        protected x, y but we dont have z
    */
};

class MyDerivedClass3: private MyBaseClass{
    /* now we have 
        private x, y but we dont have z
    */
};

void myOutsideFunction(MyBaseClass obj)
{
    cout << "x: " << obj.x << endl;
  //  cout << "x: " << obj.x << endl;
  //  cout << "x: " << obj.x << endl; 
}

int main()
{
    MyBaseClass obj1;
    myOutsideFunction(obj1);
    obj1.printProtectedData();
    MyDerivedClass1 obj2;
    obj2.printProtectedData();  
    return 0;
}