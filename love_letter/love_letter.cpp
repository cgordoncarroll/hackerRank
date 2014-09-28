#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num_cases;
    cin >> num_cases;
    while(num_cases--){
        string in;
        cin >> in;
        int left = 0;
        int right = in.size() - 1;
        int retVal = 0;
        for(; left < right; left++, right--){
            int charL = in[left];
            int charR = in[right];
            retVal += abs(charL - charR);
        }
        cout << retVal << endl;
    }
    return 0;
}

