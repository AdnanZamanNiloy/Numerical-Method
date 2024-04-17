#include <bits/stdc++.h>
using namespace std;

double Function(double x)
{
    return x * x - 4;
}
double Error(double a, double b)
{
    return abs((a - b) / a);
}
double Bisection(double a, double b, double maxError)
{
    double c = 0;
    while (Error(a, b) > maxError)
    {
        c = (a + b) / 2;
        if (Function(c) == 0)
        {
            return c;
        }
        else if (Function(c) * Function(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        cout << "a: " << a << " b: " << b << " c: " << c << " Error: " << Error(a, b) << endl;
    }
    return c;
}

int main()
{
    double a = 0;
    double b = 3;
    double maxError = 0.00000001;
    cout << "Root: " << Bisection(a, b, maxError) << endl;
    return 0;
}
