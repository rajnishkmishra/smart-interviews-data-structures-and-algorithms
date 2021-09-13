'''
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-finding-missing-number
Problem Statement:
Given an array of size N, it contains all the numbers from 1 to N+1 inclusive, except one number. You have to find the missing number.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, first line of each test case contains N - size of the array and the next line contains N integers - the elements of the array.

Constraints

1 <= T <= 500
1 <= N <= 10000
1 <= ar[i] <= N+1

Output Format

For each test case, print the missing number, separated by newline.
'''
t=int(input())
while t>0:
    n=int(input())
    a=input()
    a=a.split(" ")
    r1=0
    for i in range(0,n):
        r1=r1^int(a[i])
    r2=0
    for i in range(1,n+2):
        r2=r2^i
    print(r1^r2)
    t-=1