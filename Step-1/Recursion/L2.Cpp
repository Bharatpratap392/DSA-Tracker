//BASICS OF RECURSION PROBLEMS
//1. Printing names 5 times
#include <bits/stdc++.h>
using namespace std;
void learning_recursion(string s,int cnt)
{
    if(cnt==0)return;
    cout<<s<<endl;
    learning_recursion(s,cnt-1);
}
int main()
{
    string s;  
    cin>>s;
    learning_recursion(s,5);
    return 0;
}