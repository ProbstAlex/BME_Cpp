#include <iostream>

using namespace std;

int fib(int n)
{
    int f[n+1];
    int i;

    f[0]=0;
    f[1]=1;

    for(i=2; i<=n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main()
{
    int i;
    int InputNumber;
    cout << "Enter a number: ";
    cin >> InputNumber;
    for(i=0;i<=InputNumber;i++)
    {
        cout << fib(i) << ' ';
    }
    cout << endl;
    return 0;
}
