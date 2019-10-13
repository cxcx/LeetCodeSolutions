//
//  RemoveDup.cpp
//  LeetCode
//
//  Created by JackChen on 2019/10/3.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "RemoveDup.hpp"

int Solution::removeDuplicates(vector<int> &nums) {
    if (nums.size() == 1) {
        return 1;
    }
    
    for (auto ite = nums.begin() + 1; ite < nums.end(); ite++) {
        if (*ite == *(ite - 1)) {
            nums.erase(ite);
            ite--;
        }
    }
    
    return (int)nums.size();
}
