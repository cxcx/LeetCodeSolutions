//
//  main.cpp
//  LeetCode
//
//  Created by JackChen on 2019/9/26.
//  Copyright © 2019 JackChen. All rights reserved.
//

#include <iostream>
#include "ValidParent.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s;
    bool valid = s.isValid("()[]{}");
    cout<<valid<<endl;
    return 0;
}
