#include <iostream>
using namespace std;

/* 请在这里填写答案 */

double division(int a,int b)
{
    const char* msg = "Divided by zero!";
    if(b==0)
      throw msg;
    else return a/b;
    
}
int main ()
{
    int x,y;
    double z = 0;
    int* p = new int[0];
    cout<<p<<endl;
}
