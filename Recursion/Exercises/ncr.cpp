#include <iostream>
#include <cstring>
using std ::cout;
int Factorial(int N)
{

    
    if (N == 1 || N == 0)
    {
        return 1;
    }
    
    return Factorial(N-1) * N;  
}

int ncr(int n , int r)
{
    if (r==0 || r== n)
    {
        return 1;
    }
    
    return ncr(n-1,r-1) + ncr(n-1,r);
}
int main()
{
cout<<ncr(5,4);

 return 0;   
}