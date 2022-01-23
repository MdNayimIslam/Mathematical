#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p = 0;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "It is not Prime Number" << endl;
            p = 1;
            break;
        }
    }
    if (p == 0)
    {
        cout << "It is Prime Number" << endl;
    }
    return 0;
}