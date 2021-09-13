'''
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
'''
t = int(input())
while t>0:
    n=int(input())
    if n==0:
        print(0)
    else:
        s=""
        while n!=0:
            if n&1==0:
                s+='0'
            else:
                s+='1'
            n=n>>1
        print(s[::-1])
    t-=1