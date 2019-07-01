#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    long long int arr[10];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=6;
    arr[4]=24;
    arr[5]=120;
    arr[6]=720;
    arr[7]=5040;
    arr[8]=40320;
    arr[9]=362880;
    int s1=0;
    for(int i=10;i<=n;i++) {
        int sum=0;
       string s=to_string(i);
        //cout<<s<<endl;
        for(int j=0;j<s.length();j++) {
            sum=sum+arr[int(s[j]-'0')];
            //cout<<i<<" "<<sum<<endl;
        }
        if(sum%i==0) {
            s1=s1+i;
        }

    }
    cout<<s1<<endl;

    return 0;
}
