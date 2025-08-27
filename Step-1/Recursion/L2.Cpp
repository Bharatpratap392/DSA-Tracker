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
//2. print from 1 to n

#include <bits/stdc++.h>
using namespace std;

void learning_recursion(int i,int n)
{
    if(i>n)return;
    cout<<i<<" ";
    learning_recursion(i+1,n);
}
int main()
{
    int n;  
    cin>>n;
    learning_recursion(1,n);
    return 0;
}

//3.print from n to 1
#include <bits/stdc++.h>
using namespace std;
void learning_recursion(int n){
    if(n==0)return;
    cout<<n;
    learning_recursion(n-1);
}

int main() {
    int n;
    cin>>n;
    learning_recursion(n);
    return 0;
}