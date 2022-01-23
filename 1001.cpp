#include <iostream>

using namespace std;
inline int add(int left, int right) { return left + right; }

int main() {
    int l, r;
    cin >> l >> r;
    cout << add(l, r);
//  cout << l+r << endl; Inline Function is much faster than normal function.
}
