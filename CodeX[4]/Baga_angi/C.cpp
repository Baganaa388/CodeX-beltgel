#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (n < 5)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }
    else
    {
        for (int i = k; i >= 1; i--)
        {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }
    return 0;
}