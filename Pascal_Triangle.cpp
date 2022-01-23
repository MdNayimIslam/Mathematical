#include <bits/stdc++.h>
using namespace std;
int Factorial(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int n, r;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << Factorial(i) / (Factorial(i - j) * Factorial(j)) << " ";
        }
        cout << endl;
    }
    return 0;
}