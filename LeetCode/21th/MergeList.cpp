//
//  MergeList.cpp
//  LeetCode
//
//  Created by JackChen on 2019/10/3.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include "MergeList.hpp"

ListNode *Solution::mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *newList = NULL;
    ListNode *listEnd = NULL;
    ListNode *nodeTmp = NULL;
    
    if (l1 == NULL) {
        return l2;
    } else if (l2 == NULL) {
        return l1;
    }
    
    if (l1->val < l2->val) {
        newList = l1;
        l1 = l1->next;
    } else {
        newList = l2;
        l2 = l2->next;
    }
    listEnd = newList;
    
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            nodeTmp = l1;
            l1 = l1->next;
        } else {
            nodeTmp = l2;
            l2 = l2->next;
        }
        listEnd->next = nodeTmp;
        listEnd = listEnd->next;
    }
    
    if (l1 == NULL) {
        listEnd->next = l2;
    } else if (l2 == NULL) {
        listEnd->next = l1;
    }
    
    return newList;
}
