#include <iostream>
#include <cstring>
using std ::cout;
int fibo[10];

int n2fib(int n) // O(2^n)
{
    if (n <= 1)
        return n;
    return n2fib(n - 2) + n2fib(n - 1);
}

int fib(int n) // by using memorization
{
    if (n <= 1)
    {
        fibo[n] = n;
        return n;
    }
    if (fibo[n - 2] == -1)
    {
        fibo[n - 2] = fib(n - 2);
    }
    if (fibo[n - 1] == -1)
    {
        fibo[n - 1] = fib(n - 1);
    }
    return fibo[n - 2] + fibo[n - 1];
}

int main(int argc, char const *argv[])
{
    memset(fibo, -1, sizeof(fibo));

//    for (auto i : fibo)
//    cout<<i<<" ";
   cout << fib(4);

    return 0;
}
