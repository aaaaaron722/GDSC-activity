#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int num[100] = {};

    for (int i = 0; i < 100; i++) {
        num[i] = rand() % 200; // 隨機產生亂數存進 array
    }

    // put your code here
    for(int i = 0; i < 100; i++)
    {
      for(int j = 0; j < 99; j++)
      {
        if (num[j] >= num[j+1])
        {
          int a = 0;
          a = num[j+1];
          num[j+1] = num[j];
          num[j] = a;
        }
      }
    }
    for(int i = 0; i < 100; i++)
    {
      cout << num [i] << " ";
    }
    return 0;
}