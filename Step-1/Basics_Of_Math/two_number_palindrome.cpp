#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;int b;
    cin>>a>>b;
    if(a<0||b<0){
        cout<<false;
    }
    int c=a+b;
    int reversed=0;
    while(c>0){
        int digit=c%10;
        reversed=reversed*10+digit;
        c/=10;
    }
    cout<<reversed;
}