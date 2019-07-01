#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<string > a;
    a.resize(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int n1;
    cin>>n1;

    int t;
    for(int i=0;i<n1;i++) {
        t=0;
        string s;
        cin>>s;
        for(int j=0;j<n;j++) {
            if(s==a[j]) {
                int sum=0;
                for(int k=0;k<a[j].length();k++) {
                    if(isupper(a[j][k])) {
                        sum=sum+(int )(a[j][k]-64);
                        //cout<<sum<<endl;
                    }
                    if(isspace(a[j][k])) {
                        sum=sum;
                       // cout<<sum<<endl;
                    }
                    if(islower(a[j][k])) {
                        sum=sum+(int)(a[j][k]-96);
                       // cout<<sum<<endl;
                    }
                }
                t=(j+1)*sum;
                cout<<t<<endl;
            }
        }
    }
    return 0;
}
