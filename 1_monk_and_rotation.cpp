/*
Monk and Rotation
https://www.hackerearth.com/practice/codemonk/
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        while (k >= n) k -= n;
        for (int i=0; i<n; i++) cin >> arr[i];
        for (int i=n-k; i<n; i++) cout << arr[i] << " ";
        for (int i=0; i<n-k; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
