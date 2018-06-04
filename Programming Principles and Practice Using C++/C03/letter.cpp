#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;
    cout << "\nHello " << first_name << ",\n\n";
    cout << "\tHow are you doing? I'm just memein'. Sup witchu boi???\n";
    cout << "What was your friend's name again? ";
    string friend_name;
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " lately?\n";
    cout << "What was their sex? ";
    char sex;
    cin >> sex;
    if (sex == 'm' || sex == 'M')
        cout << "\nIf you see " << friend_name << " please ask him to call me.\n";
    else if (sex == 'f' || sex == 'F')
        cout << "\nIf you see " << friend_name << " please ask her to call me.\n";
    else
        cout << "\nIf you see " << friend_name << " please ask him to call me.\n";
    cout << "I hear you just had a birthday. How old are you now? ";
    int age;
    cin >> age;
    if (age < 0 || age > 110)
        simple_error("You're kidding!\n");
    else if (age < 12)
        cout << "\nNext year you'll be " << age+1 << "!\n";
    else if (age == 17)
        cout << "\nNext year you'll be able to vote.\n";
    else if (age > 70)
        cout << "\nI hope you're enjoying your retirement.\n";
    else 
        cout << age << " huh? That's nice.\n";
    cout << "Well, I hope you're doing well. I'll see you later.\n";
    cout << "Sincerely,\n\n";
    cout << "\tDrooboi\n";
    return 0;
}
