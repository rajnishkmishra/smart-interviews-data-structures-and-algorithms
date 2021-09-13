'''
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
'''
def checkBit(i,j):
    return (i>>j)&1 == 1

t=int(input())
while t>0:
    inp=input()
    a=int(inp.split(" ")[0])
    b=int(inp.split(" ")[1])
    x=a
    ans=1
    for i in range(0,32):
        if checkBit(b,i):
            ans=(ans*x)%1000000007
        x=(x*x)%1000000007
    print(ans)
    t-=1