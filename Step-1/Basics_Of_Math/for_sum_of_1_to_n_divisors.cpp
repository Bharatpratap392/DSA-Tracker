//for sum of 1 to n divisors
#include <bits/stdc++.h>
using namespace std;
void sumofalldivisors(){
    int n;cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * (n / i);
    }
    cout << sum;
}
//print all divisors
void printalldivisors(){
    int n;cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i*(n/i);
    }
    cout<<sum;
}
int main()
{
    sumofalldivisors();
    printalldivisors();
}