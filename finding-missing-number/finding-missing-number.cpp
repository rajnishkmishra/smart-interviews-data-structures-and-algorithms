/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-finding-missing-number
Problem Statement:
Given an array of size N, it contains all the numbers from 1 to N+1 inclusive, except one number. You have to find the missing number.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, first line of each test case contains N - size of the array and the next line contains N integers - the elements of the array.

Constraints

1 <= T <= 500
1 <= N <= 10000
1 <= ar[i] <= N+1

Output Format

For each test case, print the missing number, separated by newline.
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
        int a[n],r1=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            r1=r1^a[i];
        }
        int r2=0;
        for(int i=1;i<=n+1;i++)
        r2=r2^i;
        
        cout<<(r1^r2)<<endl;
    }
    return 0;
}