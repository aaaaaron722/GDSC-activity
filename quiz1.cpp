#include<iostream>
using namespace std;

int main()
{  
   int n, s = 0; //n块计,s顶糷羆㎝
   int num = 1; //繦獽安砞计
   cout << "叫块计: ";
   cin >> n;

   for (int i = 1; i <= n; i++)
   {  
      num *= i; //num = num * i
      s += num; // s = s + num
   }
   cout << "1!+2!+3!+...+n! = " << s << endl;
}