#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p = 0;
    cout << "Enter Number: ";
    cin >> n;
    int i = n;
    while (n > 0)
    {
        p += pow((n % 10), 3);
        n = n / 10;
    }
    if (i == p)
    {
        cout << "It is Armstrong Number" << endl;
    }
    else
    {
        cout << "It is not Armstrong Number" << endl;
    }
    return 0;
}