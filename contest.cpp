#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string changeCase(string s){
    
    int a;
    for (int i = 0; i < s.length(); i++)
    {
        a = s[i];
        if (s[i] >= 97 && s[i] <= 122)
            s[i] = a-32;
        /*else if (s[i] >= 65 && s[i] <= 60)
        {
            s[i] = a+32;
        }*/
        
    }

    return s;
}

int main2(){

    /*int t,n,cnt = 0, ans;
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
        
        cout<<"away "<<ans<<endl;*/
        /*string s1,s2;
        int a, sum1 = 0, sum2 = 0, ans = 0;
        cin>>s1>>s2;
        s1 = changeCase(s1);
        s2 = changeCase(s2);
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] > s2[i]){
                ans = 1;
                break;
            }
            else if(s2[i] > s1[i]){
                ans = -1;
                break;
            }
        }
        cout<<ans;*/

       
        

    //}
}