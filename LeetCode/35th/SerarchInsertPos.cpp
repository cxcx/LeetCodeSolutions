//
//  SerarchInsertPos.cpp
//  LeetCode
//
//  Created by JackChen on 2019/10/3.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "SerarchInsertPos.hpp"

int Solution::searchInsert(vector<int> &nums, int target) {
    int stand;
    int start = 0;
    int end = (int)nums.size() - 1;

    if (nums.size() == 0) {
        return 0;
    }

    while (start <= end) {
        stand = (start + end) / 2;
        if (target == nums[stand]) {
            return stand;
        }
        
        if (target < nums[stand]) {
            end = stand - 1;
        } else if (target > nums[stand]) {
            start = stand + 1;
        }
    }
    
    return start;
}
