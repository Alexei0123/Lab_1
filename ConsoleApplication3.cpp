#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x;
    x = a + b + c;
    x = max(x, a + b * c);
    x = max(x, a * b + c);
    x = max(x, (a + b) * c);
    x = max(x, a * (b + c));
    x = max(x, a * b * c);

    cout << x;

    return 0;
}