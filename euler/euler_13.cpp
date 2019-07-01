#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string s1;
    int a[n][50]={0};
    for(int i=0;i<n;i++) {
        cin>>s1;
        for(int j=0;j<50;j++) {
            a[i][j]=(int )(s1[j]-'0');
            //cout<<a[i][j];
        }
       // cout<<endl;
    }
    int carry=0,s[50]={0};
    for(int i=49;i>=0;i--) {
        s[i]=s[i]+carry;
        for(int j=0;j<n;j++) {
            s[i]=s[i]+a[j][i];
        }
        carry=s[i]/10;
        s[i]=s[i]%10;
    }
    string w =to_string(carry);
    int t=w.length();
    t=10-t;
    for(int i=0;i<t;i++) {
       w=w+to_string(s[i]);
    }


    cout<<w<<endl;
    return 0;
}
