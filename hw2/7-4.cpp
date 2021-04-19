#include<iostream>
using namespace std;
class Complex{
    public:
    double real,image;
    flag isInt = false;
    Complex(double _real, double _image):real(_real), image(_image){
        if(real - int(real) == 0) isInt = true;
        else isInt = false;
        if(isInt) image = double(int(image));
    }

   void Print()
    {
        cout<<"[";
            if(real)  cout << real;
            if(real == 0 && image > 0) cout<<"+";
            if(image < 0) cout<<"-";
            cout << image;
        
    }
};
int main()
{
    
}