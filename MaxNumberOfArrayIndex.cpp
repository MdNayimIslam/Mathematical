#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[6] = {0, -9, 1, 3, -4, 5};
    int Max = INT_MIN, Index= -1;
    for (int i = 0; i < 6; i++)
    {
        if (array[i] > Max)
        {
            Max = array[i];
            Index = i;
        }
    }
    cout << " Index Number: " << Index << " Max value: " << Max << endl;
    return 0;
}