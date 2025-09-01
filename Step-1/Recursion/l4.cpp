#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,l1,l2;
    cin>>n>>l1>>l2;
    if(l1<0;l2<0) return false;
    int l3=l1+l2;
    return l3;
    int reversed=0;
    while(l3>0){
        int digit=l3%10;
        reversed=reversed*10+digit;
        l3/=10;
    }
    return reversed;
}