#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "*******  Text to Interger  *********\n" << endl;

    char myText[5];
    cin >> myText;

    int newInt;
    newInt = atoi(myText);

    cout << newInt + 100;
    cout << "\n" << myText[0];
    cout << "\n" << myText[1];
    cout << "\n" << myText[2];
    cout << "\n" << myText[3];
    cout << "\n" << myText[4];

    return 0;
}
