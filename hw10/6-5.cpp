#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

template<class T>
class Number{
    T a;
    public:
    Number(T a):a(a){}
   friend ostream & operator<<(iostream & o, const Number & N);
    const T & Max( const Number & N)
    {
        return a>N.a?a:N.a;
    }
    const T & Min(const Number & N)
    {
        
    }
};

int main()
{
   
   return 0;
}
