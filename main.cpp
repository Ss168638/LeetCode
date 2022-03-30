#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int difference;
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            difference = target - nums[i];

            for(int j = i+1; j < len; j++)
            {
                if (nums[j] == difference)
                {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

int main(){
    Solution solution;
    vector<int> nums, result;
    int numOfInputs, tartget;
    std::cout << "Enter size of Array: \n";
    std::cin >> numOfInputs;
    for (int i = 0; i < numOfInputs; i++)
    {
        int temp;
        std::cin >> temp;
        nums.push_back(temp);
    }
    std::cout << "Enter Target: \n";
    std::cin >> tartget;
    result = solution.twoSum(nums, tartget);
    std::cout << "[";
    for (int i : result)
    {
        std::cout << i << ",";
    }
    std::cout << "]";
    return 0;
}

