#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int p(int a) {

       for(long long int i=2; i*i<=a; ++i)
    {

        // condition for nonprime number
        if(a%i==0)
        {
           return 0;

        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    int m=7;
    long long int arr[999999]={0};
    arr[2]=2;
    arr[3]=5;
    arr[4]=5;
    arr[5]=10;
    arr[6]=10;
    arr[7]=17;
    int pr =7;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(m>=n) {
            cout<<arr[n]<<endl;

        }
        else {
            for(int i=m+1;i<=n;i++) {
                if(p(i)) {

                    arr[i]=i+arr[m];
                }
                else{
                    arr[i]=arr[i-1];
                    m=i;
                }
            }
            cout<<arr[n]<<endl;
        }

    }
    return 0;
}
