#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int multiples(int n) {
    int retVal;
    for (int i = 1; i < n; i++){
        if(i % 3 == 0 || i % 5 == 0) {
            retVal += i;
        }
    }
    return retVal;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << multiples(n) << endl;
    }
    return 0;
}

