#include <iostream>
using std :: cout;

int Factorial(int N)
{
    
    
    if (N == 1 || N == 0)
    {
        return 1;
    }
    
    return Factorial(N-1) * N;  
}
int main()
{   
    int x;
    std::cin>> x;
    cout<<Factorial(10);
    return 0;
}