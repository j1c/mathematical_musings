#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    for (int i = 1; i < 1000; i = i + 1)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            x += i;
        }
    }
    cout << x << endl;
}
