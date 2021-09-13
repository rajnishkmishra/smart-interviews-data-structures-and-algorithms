/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-finding-the-floor
Problem Statement:
Given an array, you have to find the floor of a number x. The floor of a number x is nothing but the largest number in the array less than or equal to x.

Input Format

First line of input contains N - size of the array. The next line contains N integers, the elements of the array. The next line contains Q - number of queries. Each of the next Q lines contains a single integer X, for which you have to find the floor of X in the given array.

Constraints

30 points
1 <= N <= 105
1 <= Q <= 102
-108 <= ar[i] <= 108

70 points
1 <= N <= 105
1 <= Q <= 105
-108 <= ar[i] <= 108

Output Format

For each query, print the floor of X, separated by newline. If floor not found, print the value of "INT_MIN"
*/
#include <cmath>
#include <cstdio>
#include<climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int BFloor(int a[],int n,int q)
{
    int low=0,high=n-1,ans=INT_MIN;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<=q)
        {
            ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
            
    }
    if(ans!=INT_MIN)
        return a[ans];
    return ans;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int q;
        cin>>q;
        cout<<BFloor(a,n,q)<<endl;
    }
    return 0;
}