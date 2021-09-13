/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-check-power-of-two
Problem Statement:
Given a number, check if it is a power of 2.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing a single positive integer.

Constraints

1 <= T <= 10000
1 <= N <= 1018

Output Format

For each test case, print "True" or "False", separated by new line.
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
        long int n;
        cin>>n;
        if(n==1)
            cout<<"True"<<endl;
        else if(n%2==0)
        {
            int count=0,flag=0;
            while(n!=0)
            {
                count+=n&1;
                if(count>1)
                {
                    flag=1;
                    break;
                }
                n=n>>1;
            }
            if(!flag)
            cout<<"True"<<endl;
            else
            cout<<"False"<<endl;
        }
        else
            cout<<"False"<<endl;
    }
    return 0;
}