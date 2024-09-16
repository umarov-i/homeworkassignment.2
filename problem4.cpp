#include <iostream>
using namespace std;
int main() {
int n1, n2, n3, n4;
cin >> n1 >> n2 >> n3 >> n4;

    int cnt = 0;
    if (n1 == n2) {
        cnt += 1;
    }
    else if (n1 == n3) {
        cnt += 1;
    }
    else if (n1 == n4) {
        cnt += 1;
    }
    else if (n2 == n3) {
        cnt += 1;
    }
    else if (n2 == n4) {
        cnt += 1;
    }
    else if (n3 == n4) {
        cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}
