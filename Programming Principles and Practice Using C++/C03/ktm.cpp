#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter the amount of kilometers to convert to miles: ";
    double kilometers;
    cin >> kilometers;
    cout << kilometers << " km is " << (kilometers / 1.609) << " miles.\n";
    return 0;
}
