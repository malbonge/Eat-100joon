#include <iostream>

using namespace std;
inline int add(int l, int r) { return l + r; }

int main() {
    int a, b;
    cin >> a >> b;
    cout << add(a, b);
}