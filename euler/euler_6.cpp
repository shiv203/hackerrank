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
        long long int p;
        cin>>p;
        long long int s=p*(p+1)*p*(p+1)/4-p*(p+1)*(2*p+1)/6;
        cout<<s<<endl;
    }
    return 0;
}
