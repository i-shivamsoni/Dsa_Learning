#include <iostream>
using std :: cout;

int Power(int N,int P)
{
    
    
    if ( P == 0)
    {
        return 1;
    }
    
    return Power(N,P-1) * N;  
}
int main()
{   
    cout<<Power(1,0);
    return 0;
}