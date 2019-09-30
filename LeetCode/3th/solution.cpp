//
//  solution.cpp
//  LeetCode
//
//  Created by JackChen on 2019/9/26.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "solution.hpp"

int Solution::lengthOfLongestSubstring(string s)
{
    if (s.length() <= 1) {
        return (int)s.length();
    }
    
    int longest = 0;
    for (string::iterator ite = s.begin(); ite != s.end(); ite++) {
        char array[256] = {0};
        int tmp_longest = 0;
        for (string::iterator ite_tmp = ite; ite_tmp != s.end(); ite_tmp++) {
            array[*ite_tmp]++;
            if (array[*ite_tmp] == 2) {
                break;
            }
            tmp_longest++;
            if (tmp_longest > longest) {
                longest = tmp_longest;
            }
        }
    }
    
    return longest;
}
