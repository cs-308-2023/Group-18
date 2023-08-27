#include <iostream>
#include "functions.h"
using namespace std;
int main()
{
    int x = 56, y = 98;

    cout << "The GCD of " << x << " and " << y << " is " << gcd(x, y) << ".\n";
    cout << "The GCD of " << x << " and " << y << " using recursion is " << gcd_rec(x, y) << ".\n";

    return 0;
}
