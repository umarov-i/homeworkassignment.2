#include <iostream>
using namespace std;
int main() {
double a1, a2;
char b;
    cin >> a1 >> b >> a2;
    if (b == '+') {
        cout << a1 + a2 << endl;
    }
    else if (b == '-') {
        cout << a1 - a2 << endl;
    }
    else if (b == '*') {
        cout << a1 * a2 << endl;
    }
    else if (b == '/') {
        cout << a1 / a2 << endl;
    }
    return 0;
}
