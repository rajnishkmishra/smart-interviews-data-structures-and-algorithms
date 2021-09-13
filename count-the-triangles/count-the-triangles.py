'''
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-count-the-triangles
Problem Statement:
You have a collection of N rods. Each rod has a unique mark on it. You are given the lengths of each rod. You have to tell how many different triangles can be formed using these rods.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the number of rods. The second line contains the lengths of the rods.

Constraints

40 points
1 <= T <= 100
1 <= N <= 100
1 <= A[i] <= 100000

60 points
1 <= T <= 100
1 <= N <= 1000
1 <= A[i] <= 100000

Output Format

For each test case, print the total number of different triangles possible, separated by new line.
'''
t=int(input())
while t>0:
    n=int(input())
    a=input().strip()
    a=a.split(" ")
    a=[int(i) for i in a]
    a.sort()
    cnt=0
    for i in range(0,n-2):
        k=i+2
        for j in range(i+1,n):
            while k<n and a[i]+a[j]>a[k]:
                k+=1
            cnt=cnt+(k-j-1)
    print(cnt)
    t-=1