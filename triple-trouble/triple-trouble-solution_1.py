'''
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-triple-trouble
Probelm Statement:
Given an array of size 3X+1, where every element occurs three times, except one element, which occurs only once. Find the element that occurs only once.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array (of the form 3X + 1) and second line contains the elements of the array.

Constraints

1 <= T <= 300
1 <= N <= 104
1 <= A[i] <= 109

Output Format

For each test case, print the number which occurs only once, separated by new line.
'''
def checkBit(i,j):
    return ((i>>j)&1) == 1
t=int(input())
while t>0:
    n=int(input())
    a=input().strip()
    a=a.split(" ")
    a=[int(i) for i in a]
    ans=0
    for i in range(0,32):
        set=0
        for j in range(0,n):
            if checkBit(a[j],i):
                set+=1
        if set%3!=0:
            ans=ans|(1<<i)
    print(ans)
    t-=1