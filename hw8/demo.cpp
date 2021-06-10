// #include <iostream>
// #include <string>
// using namespace std;

// /* 请在这里填写答案 */
// class BigInt{
//     string a;
//     public:
//     BigInt & operator=(const BigInt & b);

// };

// int main(){
//     BigInt a, b, c;
//     cin>>a>>b;
//    c=a+b;
//     cout<<a<<"+"<<b<<"="<<c<<endl;
//     return 0;
// }

#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
   int x,y;
   cin >> x >> y;
   freopen("test.txt","w+", stdout);
   if(y==0)  cerr <<"Error."<<endl;
   else cout<<x/y<<endl;
   return 0;
}
