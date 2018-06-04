#include "../std_lib_facilities.h"

int main()
{
    int pennies, nickels, dimes, quarters, halfs;
    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "How many nickels do you have? ";
    cin >> nickels;
    cout << "How many dimes do you have? ";
    cin >> dimes;
    cout << "How many quarters do you have? ";
    cin >> quarters;
    cout << "How many halfs do you have? ";
    cin >> halfs;
    cout << "You have " << pennies << ((pennies == 1) ? " penny\n" : " pennies\n");
    cout << "You have " << nickels << " nickel" << ((nickels == 1) ? "\n" : "s\n");
    cout << "You have " << dimes << " dime" << ((dimes == 1) ? "\n" : "s\n");
    cout << "You have " << quarters << " quarter" << ((quarters == 1) ? "\n" : "s\n");
    cout << "You have " << halfs << " half dollar" << ((halfs == 1) ? "\n" : "s\n");
    int total = (halfs * 50) + (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    cout << "You have " << total << " cents in total. That is $" << (total/100) << "." << (total%100) << ".\n";
    return 0;
}
