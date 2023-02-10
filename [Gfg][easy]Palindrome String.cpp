#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0 ,j=S.size()-1;
	    int flag = 1;
	    while(i<j) {
	        if(S[i] != S[j]) {
	            flag = 0;
	            break;
	        }
	        i++;j--;
	    }
	    return flag;
	}

};