//BASICS OF RECURSION PROBLEMS
//1. Printing names 5 times
#include <bits/stdc++.h>
using namespace std;
void learning_recursion(int i,int n)
{
    if(i>n)return;
    cout<<"ELDER"<<endl;
    learning_recursion(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    learning_recursion(1,n);
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

//4.printing form 1 to n using backtracking without using i+1
#include <bits/stdc++.h>
using namespace std;

void learning_recursion(int i,int n)
{
    if(i<1)return;
    cout<<i<<" ";
    learning_recursion(i-1,n);
    
}
int main()
{
    int n;  
    cin>>n;
    learning_recursion(n,n);
    return 0;
}

//5.printing form n to 1 using backtracking without using i-1
#include <bits/stdc++.h>
using namespace std;

void learning_recursion(int i,int n)
{
    if(i>n)return;
    learning_recursion(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int n;  
    cin>>n;
    learning_recursion(1,n);
    return 0;
}