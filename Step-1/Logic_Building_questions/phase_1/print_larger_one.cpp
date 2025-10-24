#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<n<<" "<<"n is larger";
    }
    else if(m>n){
        cout<<m<<" "<<"m is larger";
    }
    else{
        cout<<"both are equal";
    }
    return 0;
}