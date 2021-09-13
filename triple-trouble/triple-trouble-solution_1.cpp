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
using namespace std;

bool checkBit(int i,int j)
{
    return ((i>>j) & 1) == 1;
}
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
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int set=0;
            for(int j=0;j<n;j++)
            {
                if(checkBit(a[j],i))
                    set++;
            }
            if(set%3!=0)
                ans=ans | (1<<i);
        }
        cout<<ans<<endl;
    }
    return 0;
}