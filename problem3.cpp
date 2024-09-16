#include <iostream>
using namespace std;

int main()
{
char s;
int h;
cin >> s >> h;

    if (s == 'M' and h < 1.70) {
        cout << "Short" << endl;
    }
    else if (s == 'M' and h >= 1.70 and h < 1.85) {
        cout << "Normal" << endl;
    }
    else if (s == 'M' and h >= 1.85) {
        cout << "Tall" << endl;
    }
    else if (s == 'F' and h < 1.60) {
        cout << "Short" << endl;
    }
    else if (s == 'F' and h >= 1.60 and h < 1.75) {
        cout << "Normal" << endl;
    }
    else if (s == 'F' and h >= 1.75) {
        cout << "Tall" << endl;
    }
    return 0;
}
