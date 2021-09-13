/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-triple-trouble
Probelm Statement:
Given an array of size 3X+1, where every element occurs three times, except one element, which occurs only once. Find the element that occurs only once.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array (of the form 3X + 1) and second line contains the elements of the array.

Constraints

1 <= T <= 300
1 <= N <= 104
1 <= A[i] <= 109

Output Format

For each test case, print the number which occurs only once, separated by new line.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(um.find(x)!=um.end())
                um[x]++;
            else
                um[x]=1;
        }
        
        for(auto i : um)
        {
            if(i.second==1)
            {
                cout<<i.first<<endl;
                break;
            }
        }
    }
    return 0;
}