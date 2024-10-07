#include "calculator.h"
#include <cmath>

int Calculator::Add (double a, double b)
{
    return round(a + b);
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return round(a * b);
}
