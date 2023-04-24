/*
You are given an array. The array can be rotated. Out of the all rotated
configurations, give the one with maximum sum for SUM(i * arr[i]). Print the
maximum sum thus calculated.
*/

#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n,int sum){
    int s=0,rotate=0;
    while(rotate < n){
        for(int i=0;i<n-1;i++){
            swap(arr[i],arr[i+1]);
            s+= (i*arr[i]);
        }
        if( ( s + (n-1)*(arr[n-1]) ) > sum ){
            sum = ( s + (n-1)*(arr[n-1]) ) ;
        }
        s=0;
        rotate++;
    }
    return sum;
}


int main(){

int n;
cin>>n;
int arr[n],sum=0;
for(int p=0;p<n;p++){
    cin>>arr[p];
    sum+= (p*arr[p]);
}

cout<<rotate(arr,n,sum);
    return 0;
}
