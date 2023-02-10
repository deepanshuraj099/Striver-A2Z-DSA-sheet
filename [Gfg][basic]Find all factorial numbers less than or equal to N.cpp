#include <bits/stdc++. h>
using namespace std;
class Solution
{
public:
    vector<long long> help (long long N, vector<long long> &vec, int i) {
        long long add = i*vec[vec.size()-1];
        if(i>N || add >N) return vec;
        if(i != 1) vec.push_back(add);
        return help(N,vec,i+1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> vec;
        vec.push_back(1);
        return help(N, vec,1);
    }
};