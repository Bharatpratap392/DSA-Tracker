#include <bits/stdc++.h>
using namespace std;
//for calculating repetation of number
int main() {
    int n;
    cin >> n;
    int arr[n];
    // Take array input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Precompute frequencies (hashing)
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // Fetch frequency
        cout << hash[number] << endl;
    }
    return 0;
}
/*
input values are 
5
1 3 2 1 3
5
1 
4 
2 
3 
12 
output is :-
2
0
1
2
0
note:-and in array you can only allocate 10^6 inside main and more than that you should assign it globally*/
