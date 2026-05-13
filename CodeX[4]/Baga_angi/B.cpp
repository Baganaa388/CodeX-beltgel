#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 10;
    }
    else
    {
        cout << n - 15;
    }
    return 0;
}