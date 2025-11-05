#include<bits/stdc++.h>
using namespace std;


// No need to reverse the entire number. 
// Reverse only half of it and then compare the two halves.
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x != 0 && x % 10 == 0))
            return false;
        int ans = 0;
        while (x > ans) {
            ans = ans * 10 + x % 10;
            x = x / 10;
        }
        return (x == ans) || (x == ans / 10);
    }
};

// Normal approach
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0)
//             return false;
//         long long int ans = 0;
//         int compare = x;
//         while (x != 0) {
//             int digit = x % 10;
//             ans = ans * 10 + digit;
//             x = x / 10;
//         }
//         return ans == compare;
//     }
// };
