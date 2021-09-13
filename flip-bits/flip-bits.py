'''
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
'''
t=int(input())
while t>0:
    inp=input()
    a=int(inp.split(" ")[0])
    b=int(inp.split(" ")[1])
    res=0
    if a==b:
        print(res)
    else:
        while a!=0 or b!=0:
            if (a&1==0 and b&1==1) or (a&1==1 and b&1==0):
                res+=1
            a=a>>1
            b=b>>1
        print(res)
    t-=1