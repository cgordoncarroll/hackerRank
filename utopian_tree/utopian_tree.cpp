#include <iostream>
using namespace std;

int height(int n) {
    int retVal = 1;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            retVal++;
        } else {
            retVal = retVal * 2;
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
            cout << height(n) << endl;
        }
}

