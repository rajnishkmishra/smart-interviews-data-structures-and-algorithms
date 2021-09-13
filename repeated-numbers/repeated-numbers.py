'''
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-repeated-numbers/problem
Problem Statement:
You are given an array of N elements. All elements of the array are in range 1 to N-2. All elements occur once except two numbers, which occur twice. Your task is to find the two repeating numbers.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array and second line contains the elements of the array.

Constraints

30 points
1 <= T <= 100
4 <= N <= 103

70 points
1 <= T <= 100
4 <= N <= 106

Output Format

Print the 2 repeated numbers in sorted manner, for each test case, separated by new line.
'''
def checkBit(i,j):
    return ((i>>j) & 1) == 1

t=int(input())
while t>0:
    n=int(input())
    arr=input().strip()
    arr=arr.split(" ")
    arr=[int(i) for i in arr]
    r1=0
    for i in range(0,n):
        r1=r1^arr[i]
    for i in range(1,n-1):
        r1=r1^i
    r=0
    while r1&1==0:
        r+=1
        r1=r1>>1
    a=0
    b=0
    for i in range(0,n):
        if checkBit(arr[i],r):
            a^=arr[i]
        else:
            b^=arr[i]
    for i in range(1,n-1):
        if checkBit(i,r):
            a^=i
        else:
            b^=i
    if a>b:
        print(str(b)+" "+str(a))
    else:
        print(str(a)+" "+str(b))
    t-=1