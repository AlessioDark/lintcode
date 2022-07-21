/*************************************************************************
	> File Name: solution.cpp
	> Author: maoxq
	> Mail: 3288868269@qq.com 
	> Created Time: 2022年06月07日 星期二 19时56分40秒
 ************************************************************************/

#include<iostream>
#include <vector>

using namespace std;
class Solution {
public:
    /**
     * @param size: An integer
     * @return: An integer list
     */
    vector<int> generate(int size) {
        // write your code here
		std::vector<int> nums;
		for(int i=1;i!=size+1;++i)
			nums.push_back(i);
		return nums;
    }
};
