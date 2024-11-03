/*
    https://cses.fi/problemset/task/1068/
    Time: O(?)
    Space: O(1)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;

    cout << n << " ";
    while( n != 1){
        if(n%2){
            //n is odd
            n *= 3;
            n += 1;
            cout << n << " ";
        }
        else{
            // n is even
            n /= 2;
            cout << n << " ";
        }
    }

    return 0;
}
