#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> names;
    array<int, 100001> ies;

    string a = "a";
    cout<<a.append(to_string(122));


    for (int i = 0; i < n; i++)
    {
        
        string t;
        cin>>t;
        names.push_back(t);
        ies[i] = 0;
    }

    /*for (int i = 0; i < n; i++)
    {
        if(binary_search(names.begin(), names.end(), names[i])){
            names[i] += ies[i]+1;
            ies[i]++;
        }
    }*/
    
    
}

