/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-count-the-triangles
Problem Statement:
You have a collection of N rods. Each rod has a unique mark on it. You are given the lengths of each rod. You have to tell how many different triangles can be formed using these rods.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the number of rods. The second line contains the lengths of the rods.

Constraints

40 points
1 <= T <= 100
1 <= N <= 100
1 <= A[i] <= 100000

60 points
1 <= T <= 100
1 <= N <= 1000
1 <= A[i] <= 100000

Output Format

For each test case, print the total number of different triangles possible, separated by new line.
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
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int count=0;
        for(int i=0;i<n-2;i++)
        {
            int k=i+2;
            for(int j=i+1;j<n;j++)
            {
                while(k<n && a[i]+a[j]>a[k])
                    k++;
                count=count+(k-j-1);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}