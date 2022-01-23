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
    int n, r, c;
    cout << "Enter Number: ";
    cin >> n >> r;
    c = Factorial(n) / (Factorial(n - r) * Factorial(r));
    cout << c << endl;
    return 0;
}