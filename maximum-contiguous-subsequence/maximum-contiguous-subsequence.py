'''
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-maximum-contiguous-subsequence
Problem Statement: 
Given an array, find the length of the longest subsequence whose elements can be re-arranged in a strictly increasing contiguous order. The difference between 2 adjacent elements in the subsequence, after re-arrangement, should be exactly 1.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N - size of the array. The next line contains N integers - the elements of the array.

Constraints

1 <= T <= 1000
1 <= N <= 10000
-100000 <= ar[i] <= 100000

Output Format

For each test case, print the length of the longest subsequence, separated by newline.
'''
t=int(input())
while t>0:
    n=int(input())
    a=input().strip().split(" ")
    a=[int(i) for i in a]
    b=[1]*n
    a.sort()
    maxVal=b[0]
    for i in range(1,n):
        if a[i]-a[i-1]==1:
            b[i]=b[i]+b[i-1]
        elif a[i]==a[i-1]:
            b[i]=b[i-1]
        maxVal=max(maxVal,b[i])
    print(maxVal)
    t-=1