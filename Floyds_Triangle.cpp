#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=1;
    cout << "Enter Size: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > n - i)
            {
                cout <<counter<<" ";
                counter++;
            }
        }
        cout << endl;
    }

    return 0;
}