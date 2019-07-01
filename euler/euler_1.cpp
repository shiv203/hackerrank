#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--) {
        long long int n;
        cin>>n;
        long long int t1,t2,t3;
        t1=(n-1)/3;
        t1=3*t1*(t1+1)/2;
                t2=(n-1)/5;
        t2=5*t2*(t2+1)/2;
                t3=(n-1)/15;
        t3=15*t3*(t3+1)/2;
        cout<<t1+t2-t3<<endl;

    }
    return 0;
}
