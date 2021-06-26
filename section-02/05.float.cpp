#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float fValue = 123.456789012345;
    cout << setprecision(20) << fixed << fValue << endl;
    cout << sizeof(float) << endl;

    double dValue = 123.456789012345;
    cout << setprecision(20) << fixed << dValue << endl;
    cout << sizeof(double) << endl;

    long double lValue = 123.456789012345;
    cout << setprecision(20) << fixed << lValue << endl;
    cout << sizeof(long double) << endl;

    return 0;
}