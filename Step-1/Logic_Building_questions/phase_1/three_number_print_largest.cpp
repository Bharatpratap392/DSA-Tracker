#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,j;
    cin>>n>>m>>j;
    if(n>=m && n>=j){
        cout<<n<<" "<<"n is larger";
    }
    else if(m>=n && m>=j){
        cout<<m<<" "<<"m is larger";
    }
    else {
        cout<<j<<" "<<"j is larger";
    }
    return 0;
}