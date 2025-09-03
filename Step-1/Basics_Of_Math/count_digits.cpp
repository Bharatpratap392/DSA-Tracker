#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int original=n;
    int count =0;
    while(n>0){
        int digit=n%10;
        n/=10;
        if(digit!=0&&original%digit==0){
            count++;
        }
    }cout<<count;
}
