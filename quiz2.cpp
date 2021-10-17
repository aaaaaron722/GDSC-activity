#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "請輸入一個數字: ";
    cin >> num;
    char star = '*';
    char space = ' ';

    // your code
    for (int i = 1; i <= num; i++) //top part //maximum i is num
    {
        if (i % 2 != 0) // odd term print 
        {  
            cout << string (i, star) << endl;
        }
    }
    for (int i = num; i > 0; i--) //bottom part 
    {   
        if (i == num) // if i == num ,do not print
            i--;
        else if (i % 2 != 0)
            cout << string (i, star) << endl;
    }
    return 0;
}