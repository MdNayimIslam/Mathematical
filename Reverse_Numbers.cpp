#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p = 0;
    cout << "Enter Number: ";
    cin >> n;
    while (n > 0)
    {
        p = (p * 10) + (n % 10);
        n = n / 10;
    }
    cout << p;
    return 0;
}