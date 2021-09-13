/*
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
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkBit(int i,int j)
{
    return (i>>j)%2 == 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],r1=0;
        for(int i=0;i<n;i++)
        {   
            cin>>arr[i];
            r1=r1^arr[i];
        }
        for(int i=1;i<=n-2;i++)
            r1=r1^i;
        
        int r=0;
        while(r1%2==0)
        {
            r++;
            r1=r1>>1;
        }
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(checkBit(arr[i],r))
                a^=arr[i];
            else
                b^=arr[i];
        }
        for(int i=1;i<=n-2;i++)
        {
            if(checkBit(i,r))
                a^=i;
            else
                b^=i;
        }
        if(a>b)
            cout<<b<<" "<<a<<endl;
        else
            cout<<a<<" "<<b<<endl;
    }
    return 0;
}