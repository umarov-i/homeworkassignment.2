#include <iostream>
#include <set>
using namespace std;
int main() {
int n1, n2, n3, n4;
cin >> n1 >> n2 >> n3 >> n4;
    cin >> n1 >> n2 >> n3 >> n4;
    std::set<int> numbers1 = {n1, n2, n3, n4};

    numbers1.size();
    cout << 4 - numbers1.size() << endl;
    return 0;
}
