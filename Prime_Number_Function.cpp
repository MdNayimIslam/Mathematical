#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int p = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int A, B;
    cout << "Enter Number of Range: ";
    cin >> A >> B;
    for (int i = A; i <= B; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}