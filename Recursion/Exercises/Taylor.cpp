

#include <iostream>
using std:: cout;


double Power(double N,double P)
{
    
    
    if ( P == 0)
    {
        return 1;
    }
    
    return Power(N,P-1) * N;  
}

double Factorial(double N)
{
    
    
    if (N == 1 || N == 0)
    {
        return 1;
    }
    
    return Factorial(N-1) * N;  
}

double Taylor(double x,double p)
{    double sum ;
    if (p==0)
    {
        return 1;
    }
    
    sum =  Power(x,p) / Factorial(p);
 
    return Taylor(x,p -1) + sum;
}


int main()
{   double x =2, y = 15;
    // x gives the value for e^x
    // y gives the precision

    cout<<Taylor(x,y);

    return 0;
}
