/* 6-19 时间的比较(*) (20 分) */

#include <iostream>
#include <iomanip>
using namespace std;

/* 你提交的代码将被嵌在这里 */
class TIME{
    int h,m,s;
    public:
    TIME(int _h=0, int _m=0, int _s = 0):h(_h), m(_m), s(_s){}
    
    bool operator > (const TIME & t2);
    friend ostream &  operator << (ostream & os, const TIME c);
    friend istream & operator >>(istream & is, const TIME c);


};
bool TIME::operator>(const TIME & t2)
{
    int a = this->h*60*60 + this->m*60 + this->s;
    int b = t2.h*60*60 + t2.m*60 + t2.s;
    return a > b;
}

int main()
{
    TIME a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}