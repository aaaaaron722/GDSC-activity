#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 0;
    cout << "請輸入一個數字: ";
    cin >> num;
    char star = '*';
    char space = ' ';
    int s = 0; // space
    // your code
    
        
    for (int i = 1; i <= num; i++) //top part 
    {
        if (i % 2 != 0) //if it is odd line then print else not.  
        {
            for (s = (num - i) / 2;s > 0; s--) //print space 
                cout << ' ';
        
            cout << string (i, star) << endl; //print star
        }
    }
    for (int i = num; i > 0; i--) //bottom part 
    {   
        if (i == num) // if i == num ,do not print
            i--;
        if (i % 2 != 0) //The concept is the same as the top
        {
            for (s = (num - i) / 2; s > 0; s--)
                cout << ' ';
            cout << string (i, star) << endl;
        }
    }
    return 0;
}