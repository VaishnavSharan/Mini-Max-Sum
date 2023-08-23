#include<iostream>
#include<vector>

using namespace std;

def miniMaxSum(arr):
    arr=sorted(arr)
    print(sum(arr[:-1]),sum(arr[1:]))