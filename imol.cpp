#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int t,n,cnt = 0, ans;
    bool clk, anticlk;
    string s;
    cin>>t;
    while (t--){
        cin>>n>>s;
        ans = 0, clk = false, anticlk = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] ==  '>')
                clk = true;
            else if (s[i] == '<')
                anticlk = true;
            else if (s[i] == '-')
                ans++;
        }
        if ((clk && !anticlk) || (!clk && anticlk)){
            ans = n;
        }else if(ans < n){
            if (s[n-1] == '-')
                ans++;
        }
        
        cout<<"away              "<<ans<<endl;
    }
}


