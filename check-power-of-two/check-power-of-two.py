'''
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
'''

t=int(input())
while t>0:
    n=int(input())
    if n==1:
        print("True")
    elif n&1==0:
        count=0
        flag=False
        while n!=0:
            count+=n&1
            if count>1:
                flag=True
                break
            n=n>>1
        if flag==False:
            print("True")
        else:
            print("False")
    else:
        print("False")
    t-=1