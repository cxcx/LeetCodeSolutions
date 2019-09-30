//
//  LongestCommPrefix.cpp
//  LeetCode
//
//  Created by JackChen on 2019/9/30.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "LongestCommPrefix.hpp"

string Solution::longestCommonPrefix(vector<string> &strs) {
    
    if (strs.size() == 0) {
        return "";
    }
    
    unsigned int i = 0;
    
    while (i < strs.begin()->length()) {
        char stand = strs.begin()->at(i);
        for (auto iter = strs.begin(); iter != strs.end(); iter++) {
            if (i >= iter->length()) {
                return *iter;
            }
            
            if (stand != iter->at(i)) {
                return iter->substr(0, i);
            }
        }
        i++;
    }
    
    return strs[0];
}

