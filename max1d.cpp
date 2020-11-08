#include <bits/stdc++.h>
using namespace std;
void max_sub_arr_1d(int array[], int ans[3], int size){
    int sum = 0, start = 0, end = 0, s = 0;
    ans[0] = 0;
    for (int i = 0; i< size; i++){
        sum += array[i];

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
}