#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v1;
    int s;
    for(int i=0;i<n;i++){

        cin>>s;
        v1.push_back(s);
    }
    sort(v1.begin(),v1.end());
    long long int product = 1;
    int max1 = INT_MIN;
    for(int i=0;i<n;i++){
        if(v1[i]>max1){
            max1 = v1[i];
        }
}
    if(max1<=0){
         product=product*v1[0];
         product=product*v1[1];
         product=product*v1[2];
        cout<<product;
    }
    else{
        product=product*v1[n-1];
         product=product*v1[n-2];
         product=product*v1[n-3];
          cout<<product;
        }
    return 0;
}
