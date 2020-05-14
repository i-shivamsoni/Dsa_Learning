#include <iostream>
using std :: cout;

// int sumofN (int N)
// {
//     static int sum;
//     if (N>0)
//     {
//       sum =  sumofN (N-1) + N;
//     }
    
//     return sum;
// }

int sumofN (int N)
{
if (N==0)
{
    return 0;
}

return sumofN(N-1) + N;
}

int main(int argc, char const *argv[])
{

    cout<<sumofN(4);
    return 0;
}
