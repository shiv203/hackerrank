#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int m=n;

        for(int i=n-1;i>0;i--) {
            int t=gcd(m,i);
            m=m*i/t;
        }
        cout<<m<<endl;

    }
    return 0;
}
