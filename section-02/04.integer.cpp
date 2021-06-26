#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int value = -897907689;
    cout << value << endl;

    cout << "Maximum for int8:  " << INT8_MAX << endl;
    cout << "Minimum for int8: " << INT8_MIN << endl;
    cout << "Maximum for int16:  " << INT16_MAX << endl;
    cout << "Minimum for int16: " << INT16_MIN << endl;
    cout << "Maximum for int32:  " << INT32_MAX << endl;
    cout << "Minimum for int32: " << INT32_MIN << endl;
    cout << "Maximum for int64:  " << INT64_MAX << endl;
    cout << "Minimum for int64: " << INT64_MIN << endl;

    long lValue = 1241241241241414;
    cout << lValue << endl;

    short sValue = 30000;
    cout << sValue << endl;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;

    unsigned int uValue = 897907689;
    cout << uValue << endl;
    return 0;
}