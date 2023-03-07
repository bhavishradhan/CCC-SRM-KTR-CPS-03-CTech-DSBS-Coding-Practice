#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int s;
    vector<int> v1;
    for(int i=0;i<n;i++){
      cin>>s;
        v1.push_back(s);
    }
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    long long int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum+(pow(2,i)*v1[i]);
}
    cout<<sum;
    return 0;
}
