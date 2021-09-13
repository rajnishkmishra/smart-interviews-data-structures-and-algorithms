/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-maximum-contiguous-subsequence
Problem Statement: 
Given an array, find the length of the longest subsequence whose elements can be re-arranged in a strictly increasing contiguous order. The difference between 2 adjacent elements in the subsequence, after re-arrangement, should be exactly 1.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N - size of the array. The next line contains N integers - the elements of the array.

Constraints

1 <= T <= 1000
1 <= N <= 10000
-100000 <= ar[i] <= 100000

Output Format

For each test case, print the length of the longest subsequence, separated by newline.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=1;
        }
        sort(a,a+n);
        long long maxVal=b[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]==1)
                b[i]=b[i]+b[i-1];
            else if(a[i]==a[i-1])
                b[i]=b[i-1];
            maxVal=max(maxVal,b[i]);
        }
        cout<<maxVal<<endl;
    }
    return 0;
}