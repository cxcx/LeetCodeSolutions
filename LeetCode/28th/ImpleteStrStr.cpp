//
//  ImpleteStrStr.cpp
//  LeetCode
//
//  Created by JackChen on 2019/10/3.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "ImpleteStrStr.hpp"

int Solution::strStr(string haystack, string needle) {
    if (needle.length() == 0) {
        return 0;
    }
    
    return (int)haystack.find(needle);
}
