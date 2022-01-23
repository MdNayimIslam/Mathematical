#include<bits/stdc++.h>
using namespace std;
void Factorial(int n)
{
    int f = 1;
    for (int i = 2; i <=n; i++)
    {
        f *= i;
    }
    cout<<f<<endl;
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    Factorial(n);
    return 0;
}