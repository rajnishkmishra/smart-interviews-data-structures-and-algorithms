/*
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-compute-a-power-b
Problem Statement:
Given 2 numbers - a and b, evaluate ab.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing 2 numbers - a and b, separated by space.

Constraints

30 points
1 <= T <= 1000
0 <= a <= 106
0 <= b <= 103

70 points
1 <= T <= 1000
0 <= a <= 106
0 <= b <= 109

Output Format

For each test case, print ab, separated by new line. Since the result can be very large, print result % 1000000007
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkBit(int i,int j)
{
    return ((i>>j)&1) == 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        long x=a,ans=1;
        for(int i=0;i<32;i++)
        {
            if(checkBit(b,i))
            {
                ans=(ans*x)%1000000007;
            }
            x=(x*x)%1000000007;
        }
        cout<<ans<<endl;
    }
    return 0;
}