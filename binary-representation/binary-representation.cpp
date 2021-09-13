/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-binary-representation
Problem Statement:
Given a positive integer, print its binary representation.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing a single integer.

Constraints

1 <= T <= 10000
0 <= N <= 109

Output Format

For each test case, print binary representation, separated by new line.
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
        string s;
        if(n==0)
            cout<<0;
        else
        while(n!=0)
        {
            if(n%2==0)
            s+='0';
            else
            s+='1';
            n=n>>1;
        }
        int i=s.length()-1;
        while(i>=0)
            cout<<s[i--];
        cout<<endl;
    }
    return 0;
}