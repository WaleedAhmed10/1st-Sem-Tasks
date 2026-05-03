#include <iostream>
using namespace std;

int main() 
{
    int n, range;
    bool isPrime = true;
    cout << "Enter the range to generate prime numbers = ";
    cin >> range;
    cout << "Enter any number = ";
    cin >> n;
    for (int x = 2; x <= range; x++)
    {
        bool isPrime = true;
        for (int y = 2; y * y <= x; y++)
        {
            if (n % x == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime && n != 1)
        {
            cout << n << " is a Prime Number." << endl;
        }
        else
        {
            cout << n << " is a Composite Number." << endl;
        }
        return 0;
    }
}