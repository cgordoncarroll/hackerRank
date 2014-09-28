#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
    int a, b, retVal;
    for(a = l; a <= r; a++){
        for(b = l; b <= r; b++){
            retVal = max(retVal, a ^ b);
        }
    }
    return retVal;
}

int main() {
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res << endl;

    return 0;
}

