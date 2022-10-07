/*
cin will not accept spaces. . It will see the space as the end of the input. We will obviously need a method to enter strings.

C++ has a function called getline.
*/


#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name1, address1, tel1;

    //enter first user
    cout << "What is your name?: ";
    getline(cin, name1);
    cout << "What is your address?: ";
    getline(cin, address1);
    cout << "What is your telepone number?: ";
    getline(cin, tel1);

    cout << "\n\n";

    cout << name1 << "\n";
    cout << "\t" << address1 << "\n";
    cout << "\t" << tel1 << "\n\n";

    return 0;
}