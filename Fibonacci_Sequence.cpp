#include<bits/stdc++.h>
using namespace std;
void Fibonacci(int n)
{
    int f1 = 0;
    int f2 = 1;
    int f3;
    for (int i = 1; i <=n; i++)
    {
        cout<<f1<<endl;
        f3 = f1+f2;
        f1 = f2;
        f2 = f3;
    }
    
    return;
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    Fibonacci(n);
    return 0;
}