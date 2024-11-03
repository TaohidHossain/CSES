/*
    https://cses.fi/problemset/task/1083
    Time: O(n)
    Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin >> n;
    set<int> cache;

    for(int i=1; i<n; i++){
        cin >> a;
        cache.insert(a);
    }
    for(int i=1; i<=n; i++){
        if(cache.find(i) == cache.end()){
            cout << i;
            break;
        }
    }

    return 0;
}
