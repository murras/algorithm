#include <bits/stdc++.h>
using namespace std;
int arr[5][4];
int main() {
    int sum, max_ = 0;
    int cook = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        if (sum > max_) {
            cook = i + 1;
            max_ = sum;
        }
    }
    cout << cook << ' ' << max_;
}