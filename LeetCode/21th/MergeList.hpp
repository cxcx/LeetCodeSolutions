//
//  MergeList.hpp
//  LeetCode
//
//  Created by JackChen on 2019/10/3.
//  Copyright © 2019 JackChen. All rights reserved.
//

#ifndef MergeList_hpp
#define MergeList_hpp

#include <stdio.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {};
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};


#endif /* MergeList_hpp */
