#include<iostream>
using namespace std;

int main()
{  
   int n, s = 0; //n代表輸入的數字,s代表階層的總和
   int num = 1; //隨便假設一個數
   cout << "請輸入一個數字: ";
   cin >> n;

   for (int i = 1; i <= n; i++)
   {  
      num *= i; //num = num * i
      s += num; // s = s + num
   }
   cout << "1!+2!+3!+...+n! = " << s << endl;
}