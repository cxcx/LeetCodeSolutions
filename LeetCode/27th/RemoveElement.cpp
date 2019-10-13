//
//  RemoveElement.cpp
//  LeetCode
//
//  Created by JackChen on 2019/10/3.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "RemoveElement.hpp"

int Solution::removeElement(vector<int> &nums, int val) {
    for (auto ite = nums.begin(); ite < nums.end(); ite++) {
        if (*ite == val) {
            nums.erase(ite);
            ite--;
        }
    }
    
    return (int)nums.size();
}
