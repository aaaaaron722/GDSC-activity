#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(0));
    int num[100] = {};
    
    for (int i = 0; i < 100; i++)
    {
        num[i] = rand() % 200;
    }

    
    for (int i = 0; i < 100; i++)
    {
        sort(num, num + 100);
        cout << num[i] << endl;
    }
    
    return 0;
}
