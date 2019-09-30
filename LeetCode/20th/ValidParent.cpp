//
//  ValidParent.cpp
//  LeetCode
//
//  Created by JackChen on 2019/9/30.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "ValidParent.hpp"
#include <vector>

bool isPair(char a, char b) {
    if (((a == '{') && (b == '}')) ||
        ((a == '[') && (b == ']')) ||
        ((a == '(') && (b == ')'))) {
        return true;
    }
    
    return false;
}

bool Solution::isValid(string s) {
    bool valid = false;
    unsigned int i = 0;
    vector<char> vec;
    
    while (i < s.length()) {
        if (vec.size() == 0) {
            vec.push_back(s.at(i));
        } else {
            if (isPair(vec.back(), s.at(i))) {
                vec.pop_back();
            } else {
                vec.push_back(s.at(i));
            }
        }
        i++;
    }
    
    if (vec.size() == 0) {
        valid = true;
    }
    
    return valid;
}
