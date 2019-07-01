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
        if(p<=0) {
            return 0;
        }


        long long int  a=1,b=2,c=0,s=2;

        for( ;c<p;) {

            c=a+b;
            a=b;
            b=c;
            if(c%2==0&&c<p) {

                    s=s+c;
            }

        }

    cout<<s<<endl;
    }

    return 0;
    }
