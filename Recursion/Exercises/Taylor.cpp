

#include <iostream>
using std::cout;

double Power(double N, double P)
{

    if (P == 0)
    {
        return 1;
    }

    return Power(N, P - 1) * N;
}

double Factorial(double N)
{

    if (N == 1 || N == 0)
    {
        return 1;
    }

    return Factorial(N - 1) * N;
}

double Taylor(double x, double p)
{
    double sum;
    if (p == 0)
    {
        return 1;
    }

    sum = Power(x, p) / Factorial(p);

    return Taylor(x, p - 1) + sum;
}

double retaylor(double x, double p)
{
    // e^x = 1 + x/1! + x^2/2! + x^3/3! + ...... 

    static double Sum = 1;
    static double power = 1, facto = 1;
    if (p == 0)
    {
        return 1;
    }

    retaylor(x, p - 1);
    power = power * x;
    facto = facto * p;
    Sum = (power / facto) + Sum;

    return Sum;
}

double cataylor(double x, double p)
{ //e^x = 1 + (x/1) (1 + (x/2) (1 + (x/3) (........) ) ) 
    static double cSum = 1;
    static double cpower = 1, cfacto = 1;
    if (p == 0)
    {
        return 1;
    }
    cSum = x / p;
    cSum =+ 1;

    return retaylor(x, p - 1) * cSum;
}

int main()
{
    double x = 2, y = 15;
    // x gives the value for e^x
    // y gives the precision
    cout << cataylor(x, y);

    return 0;
}
