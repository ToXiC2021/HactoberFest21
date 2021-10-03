#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define input(a) int a; cin>>a
#define vi vector<int>
#define pb push_back
#define pf push_front
#define emp emplace
#define mp make_pair
#define map map<int,int>
#define deq deque<int>
#define tests int t; cin >> t; while(t--)
#define FOR(a,b) for(int i = a;i<b;i++)
using namespace std;

int deleteToMakePalindrome(string s1){
    int n=s1.length();
    string s2 = "";
    for(int i=n-1;i>=0;i--){
        s2.pb(s1[i]);
    }
    int t[n+1][n+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0) t[i][j] = 0;
            else if(s1[i-1] == s2[j-1]){
                t[i][j] = 1+ t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }
    return n-t[n][n];
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    string s1; cin>>s1;
    cout<<deleteToMakePalindrome(s1);
    return 0;
}