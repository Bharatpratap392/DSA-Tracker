//1.sum of all 1 to n numbers
#include <bits/stdc++.h>
using namespace std;
void learning_recursion(int i,int sum)
{
    if(i<1){
        cout<<sum;
        return;
    }
    learning_recursion(i-1,sum+i);
}
int main() {
    int n;
    cin>>n;
    learning_recursion(n,0);
    return 0;
}

//2.Factorial of N numbers 
#include <bits/stdc++.h>
using namespace std;
void learning_recursion(int i,int f){
    if(i<1){
        cout<<f;
        return;
    }
    learning_recursion(i-1,f*i);
    
}
int main() {
    int n;
    cin>>n;
    learning_recursion(n,1);
    return 0;
}
