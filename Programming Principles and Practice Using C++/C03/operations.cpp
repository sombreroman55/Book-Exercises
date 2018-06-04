#include "../std_lib_facilities.h"

int main()
{
    int val1, val2;
    cout << "Please enter two integer values: ";
    cin >> val1 >> val2;
    if (val1 < val2)
        cout << val1 << " is smaller than " << val2 << endl;
    else if (val1 > val2)
        cout << val1 << " is larger than " << val2 << endl;
    else
        cout << val1 << " is equal to " << val2 << endl;
    cout << "Their sum is " << (val1 + val2) << endl;
    cout << "Their difference is " << (val1 - val2) << endl;
    cout << "Their product is " << (val1 * val2) << endl;
    cout << "Their quotient is " << (val1 / val2) << endl;
    return 0;
}
