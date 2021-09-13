'''
Problem Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-finding-the-floor
Problem Statement:
Given an array, you have to find the floor of a number x. The floor of a number x is nothing but the largest number in the array less than or equal to x.

Input Format

First line of input contains N - size of the array. The next line contains N integers, the elements of the array. The next line contains Q - number of queries. Each of the next Q lines contains a single integer X, for which you have to find the floor of X in the given array.

Constraints

30 points
1 <= N <= 105
1 <= Q <= 102
-108 <= ar[i] <= 108

70 points
1 <= N <= 105
1 <= Q <= 105
-108 <= ar[i] <= 108

Output Format

For each query, print the floor of X, separated by newline. If floor not found, print the value of "INT_MIN"
'''
import sys
def BFloor(a,n,q):
    low=0
    high=n-1
    ans=-sys.maxsize-1
    while low<=high:
        mid=int((low+high)/2)
        if a[mid]<=q:
            ans=mid
            low=mid+1
        else:
            high=mid-1
    if ans!=(-sys.maxsize-1):
        return a[ans]
    return -2147483648
n=int(input())
a=input().strip()
a=a.split(" ")
a=[int(i) for i in a]
a.sort()
Q=int(input())
for i in range(0,Q):
    q=int(input())
    print(BFloor(a,n,q))