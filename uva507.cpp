#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*void max_sub_arr_1d(int array[], int ans[3], int size){
    int sum = 0, start = 0, end = 0, s = 0;
    ans[0] = 0;
    for (int i = 0; size; i++){
        sum += array[i];
        cout<<sum;
        if(sum >= ans[0]){
            ans[0] = sum;
            start = s;
            end = i;
        }
        if (sum < 0){
            sum = 0;
            s = i+1;
        }
    }
    ans[1] = start;
    ans[2] = end;
}*/

int main2(){
    int r, n = 1;
    int trip[100];
    //int ans[3];

    cin>>r;
    for(int cnt = 1; cnt <= r; cnt++){
        int max = 0, sum = 0, start = 0, end = 0, s = 0;

        cin>>n;
        
        for (int i = 0; i <n-1; i++) {
            cin>>trip[i];
        }

        //Kadan Algoritm with index
        for (int i = 0; i < n-1; i++){
        sum += trip[i];

        if(sum >= max){
            max = sum;
            start = s;
            end = i;
        }
        if (sum < 0){
            sum = 0;
            s = i+1;
        }
        //to now start and end are produced

        }
        if (start == 0 || end == 0)
            cout<<"Route "<<cnt<<" has no nice parts"<<endl;
        else
            cout<<"The nicest part of route "<<cnt<<" is between stops "<<start+1<<" and "<<end+2<<endl;
        
        
    }    
}
