/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-flip-bits
Problem Statement:
You are given two numbers A and B. Write a program to count the number of bits to be flipped to change the number A to the number B. Flipping a bit of a number means changing a bit from 1 to 0 or vice versa.

Input Format

First line of input contains T - number of test cases. Each of the next T lines contains 2 integer A and B, separated by space.

Constraints

1 <= T <= 100000
0 <= N <= 109

Output Format

For each test case, print the number of bit flips required to convert A to B, separated by new line.
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
        int a,b,res=0;
        cin>>a>>b;
        if(a==b)
            cout<<res<<endl;
        else
        {
            while(a!=0 || b!=0)
            {
                if((a%2==0&&b%2!=0) || (a%2!=0&&b%2==0))
                    res+=1;
                a=a>>1;
                b=b>>1;
            }
            cout<<res<<endl;
        }
    }
    return 0;
}