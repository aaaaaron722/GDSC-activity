#include<iostream>
using namespace std;

int main()
{  
   int n, s = 0; //n�N���J���Ʀr,s�N���h���`�M
   int num = 1; //�H�K���]�@�Ӽ�
   cout << "�п�J�@�ӼƦr: ";
   cin >> n;

   for (int i = 1; i <= n; i++)
   {  
      num *= i; //num = num * i
      s += num; // s = s + num
   }
   cout << "1!+2!+3!+...+n! = " << s << endl;
}