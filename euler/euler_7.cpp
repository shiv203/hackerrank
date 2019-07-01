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
    int m=4;
    int arr[99999]={0};
    arr[1]=2;
    arr[2]=3;
    arr[3]=5;
    arr[4]=7;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(m>=n) {
            cout<<arr[n]<<endl;

        }
        else {
            for(int i=arr[m]+1;m<=n;i++) {
                if(p(i)) {
                    arr[++m]=i;
                }
            }
            cout<<arr[n]<<endl;
        }

    }
    return 0;
}
