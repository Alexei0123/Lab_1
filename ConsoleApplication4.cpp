﻿#include <iostream>

using namespace std;

int main() {
    int n, x, y, z;
    cin >> n;

    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0;i < n;i++) {
        cin >> x;
        sum_x += x;
        cin >> y;
        sum_y += y;
        cin >> z;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}